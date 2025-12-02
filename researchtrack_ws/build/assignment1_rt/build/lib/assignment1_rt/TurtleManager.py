'''
A node that checks the relative distance between turtle1 and turtle2 and:
    [x] publish on a topic the distance (you can use a std_msgs/Float32 for that)
    [ ] stops the moving turtle if the two turtles are “too close” (you may set a threshold to monitor that)
    [ ] stops the moving turtle if the position is too close to the boundaries (.e.g, x or y > 10.0, x or y < 1.0
'''

import rclpy
import math

from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from example_interfaces.msg import Float32

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class TurtleManager(Node):
    def __init__(self):
        # Call the Node class constructor with the node name
        super().__init__('TurtleManager')

        # Subscriber
        self._subscription = self.create_subscription(Pose, 'turtle1/pose', self._t1pose, 10)
        self._subscription = self.create_subscription(Pose, 'turtle2/pose', self._t2pose, 10)

        # Publisher
        self._cmd_pub = self.create_publisher(Float32, 'turtle1/distance', 10)

        # Timer to publish commands periodically
        self._timer = self.create_timer(1, self._publishDistance)

        # Internal state
        self._current_pose_t1 = None
        self._current_pose_t2 = None
        self._cmd = Twist()
        self._distance = Float32()
        self.distance = None
    
    def _publishDistance(self):
        t1 = self._current_pose_t1
        t2 = self._current_pose_t2 
        if (t1 != None) & (t2 != None):
            self._distance.data = math.sqrt((t1[0] - t2[0])**2 + (t1[1] - t2[1])**2)
            self._cmd_pub.publish(self._distance)

    def _t1pose(self, msg: Pose):
        self._current_pose_t1 = [msg.x, msg.y, msg.theta]
        # self.get_logger().info(f"Current position: {msg.x}, {msg.y}")

    def _t2pose(self, msg: Pose):
        self._current_pose_t2 = [msg.x, msg.y, msg.theta]

    def _publish_cmd(self):
        # For now: simple example → constant forward speed

        self._cmd.linear.x = 1.0
        self._cmd.angular.z = 0.5

        self._cmd_pub.publish(self._cmd)

def main(args=None):
    """Main entrypoint"""

    # Initialize and run node
    try:
        rclpy.init()
        node = TurtleManager()
        rclpy.spin(node)

    # Catch ctrl+c or shutdown request
    except (KeyboardInterrupt, ExternalShutdownException):
      pass

    # Destroy node (now) and gracefully exit
    finally:
        if node is not None:
          node.destroy_node()
        if rclpy.ok():
          rclpy.shutdown()

if __name__ == '__main__':
    main()