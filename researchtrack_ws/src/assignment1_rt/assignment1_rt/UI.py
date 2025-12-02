''' UI (node1)
    [x] Implement a simple textual interface to retrieve the user command 
        (i.e., you can use cin (c++) or input (python). 
        The user should be able to select the robot they want to control (turtle1 or turtle2), and the velocity of the robot
    [x] The command should be sent for 1 second, and then the robot should stop, and the user should be able again to insert the command again
'''

import rclpy
import math
import time

from rclpy.executors import ExternalShutdownException
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from rt1_interfaces.msg import Comando


class UI(Node):
    def __init__(self):
        super().__init__('ui')

        # Publisher of Comando
        self.cmd_pub = self.create_publisher(Comando, 'UI/comando', 10)

def main():
    rclpy.init()
    node = UI()

    try:
        while rclpy.ok():
            rclpy.spin_once(node, timeout_sec=0.05)

            # Select target turtle
            t = input("Select turtle [1/2]: ").strip()
            if t not in ('1', '2'):
                print("Invalid selection.")
                continue

            cmd_raw = input("Insert forward and angular speed: ").split()

            cmd = Comando()
            cmd.target = int(t)
            cmd.velocity = Twist()

            if len(cmd_raw) == 1:
                cmd.velocity.linear.x = float(cmd_raw[0])
            else:
                cmd.velocity.linear.x = float(cmd_raw[0])
                cmd.velocity.angular.z = float(cmd_raw[1])

            # Send command for 1 second
            node.cmd_pub.publish(cmd)
            time.sleep(1)

            # Send stop command
            stop = Comando()
            stop.target = int(t)
            stop.velocity = Twist()
            node.cmd_pub.publish(stop)

    except (KeyboardInterrupt, ExternalShutdownException):
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
