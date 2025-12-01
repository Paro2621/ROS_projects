import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from example_interfaces.msg import String

# specific packages imported
from turtlesim.msg import Pose 

class TurtlesimSubscriber(Node):
    """Subscriber example that prints messages to the console"""

    def __init__(self):
        """Constructor"""

        # Call the Node class constructor with the node name
        super().__init__('turtlesim_subscriber')
        
        '''
        in order to have informations about the structure of the message we are interested in (its attributes) we can run the command
          >>> $ ros2 interface show turtlesim/msg/Pose      
        '''

        # Create a subscription object
        self._subscription = self.create_subscription(
            Pose,
            'turtle1/pose',
            self._listener_callback,
            10
        )


    def _listener_callback(self, msg):
      """Prints message to the console"""
      self.get_logger().info(f"Current position: {msg.x}, {msg.y}")

def main(args=None):
    """Main entrypoint"""

    # Initialize and run node
    try:
        rclpy.init()
        node = TurtlesimSubscriber()
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