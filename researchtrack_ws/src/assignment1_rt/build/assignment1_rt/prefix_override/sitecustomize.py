import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ric/Desktop/ROS_projects/researchtrack_ws/src/assignment1_rt/install/assignment1_rt'
