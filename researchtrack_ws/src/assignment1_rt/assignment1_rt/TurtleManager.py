'''
TurtleManager (node2)
A node that checks the relative distance between turtle1 and turtle2 and:
    [x] publish on a topic the distance (you can use a std_msgs/Float32 for that)
    [ ] stops the moving turtle if the two turtles are “too close” (you may set a threshold to monitor that)
    [ ] stops the moving turtle if the position is too close to the boundaries (.e.g, x or y > 10.0, x or y < 1.0
'''

import rclpy
import math
import time

from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from example_interfaces.msg import Float32

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from rt1_interfaces.msg import Comando

class TurtleManager(Node):
    def __init__(self):
        # Call the Node class constructor with the node name
        super().__init__('TurtleManager')

        # Subscribers
        self.sub1 = self.create_subscription(Pose, 'turtle1/pose', self._t1_getPose, 10)
        self.sub2 = self.create_subscription(Pose, 'turtle2/pose', self._t2_getPose, 10)

        self.sub3 = self.create_subscription(Comando, 'UI/comando', self._applyComando, 10)

        # Publisher
        self.pub1 = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        self.pub2 = self.create_publisher(Twist, 'turtle2/cmd_vel', 10)

        self.pub_dist = self.create_publisher(Float32, 'TurtleManager/distance', 10)
        
        # Internal state
        self.t1_Pose = None
        self.t2_Pose = None
        self._distance = Float32()

        # Timer to publish commands periodically
        self._timer = self.create_timer(0.1, self._publishDistance)

    def _applyComando(self, cmd):
        if cmd.target == 1:
            self.pub1.publish(cmd.velocity)
        else:
            self.pub2.publish(cmd.velocity)

    def _t1_getPose(self, msg): # turtle 1 get pose
        self.t1_Pose = msg

    def _t2_getPose(self, msg):
        self.t2_Pose = msg

    def _publishDistance(self):
        t1 = self.t1_Pose
        t2 = self.t2_Pose 
        if t1 is not None and t2 is not None:
            self._distance.data = math.sqrt((t1.x - t2.x)**2 + (t1.y - t2.y)**2)
            self.pub_dist.publish(self._distance)

def main(args=None):
    """Main entrypoint"""

    # Initialize and run node
    try:
        rclpy.init()
        ThisNode = TurtleManager()


        rclpy.spin(ThisNode)

    # Catch ctrl+c or shutdown request
    except (KeyboardInterrupt, ExternalShutdownException):
      pass

    # Destroy node (now) and gracefully exit
    finally:
        if ThisNode is not None:
          ThisNode.destroy_node()
        if rclpy.ok():
          rclpy.shutdown()

if __name__ == '__main__':
    main()