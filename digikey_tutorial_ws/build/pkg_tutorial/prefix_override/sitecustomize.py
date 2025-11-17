import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ric/Desktop/ROS_projects/digikey_tutorial_ws/install/pkg_tutorial'
