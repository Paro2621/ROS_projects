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

        # Subscribers
        self.sub1 = self.create_subscription(Pose, 'turtle1/pose', self._t1gp, 10) # _t1gp -> turtle 1 get pose
        self.sub2 = self.create_subscription(Pose, 'turtle2/pose', self._t2gp, 10)

        # Publisher of Comando
        self.cmd_pub = self.create_publisher(Comando, 'UI/comando', 10)

        self.pose1 = None
        self.pose2 = None

    def _t1gp(self, msg): # turtle 1 get pose
        self.pose1 = msg

    def _t2gp(self, msg):
        self.pose2 = msg


def main():
    rclpy.init()
    node = UI()

    try:
        while rclpy.ok():
            rclpy.spin_once(node, timeout_sec=0.1)

            # Select target turtle
            t = input("Select turtle [1/2]: ").strip()
            if t not in ('1', '2'):
                print("Invalid selection.")
                continue

            pose = node.pose1 if t == '1' else node.pose2
            if pose is None:
                print("Pose not received yet.")
                continue

            print(f"Pose of turtle {t}:\n\tx={pose.x}, y={pose.y}, theta={pose.theta}")

            # Parse command
            cmd_raw = input("Command: f/b/r value: ").split()
            if len(cmd_raw) != 2:
                print("Malformed command.")
                continue

            action = cmd_raw[0]
            try:
                value = float(cmd_raw[1])
            except ValueError:
                print("Velocity must be a number.")
                continue

            theta = pose.theta

            cmd = Comando()
            cmd.target = int(t)
            cmd.velocity = Twist()

            if action == 'f':
                cmd.velocity.linear.x = math.cos(theta) * value
                cmd.velocity.linear.y = math.sin(theta) * value
            elif action == 'b':
                cmd.velocity.linear.x = -math.cos(theta) * value
                cmd.velocity.linear.y = -math.sin(theta) * value
            elif action == 'r':
                cmd.velocity.angular.z = value
            else:
                print("Unknown command.")
                continue

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
