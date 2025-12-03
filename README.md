# ROS_projects
A collection of ROS-based university assignments and personal robotics experiments.

## Overview
This repository contains multiple ROS workspaces developed for academic projects and individual study.  

The repository serves as:
- a structured archive of ROS exercises,
- a reference for future development,
- a showcase of work completed during university robotics courses.

## ResearchTrack1
### Instruction
1. clone the repository
```bash
git clone https://github.com/Paro2621/ROS_projects.git
cd ROS_projects/researchtrack_ws/
```
2. run the launch file
```bash
source install/setup.bash
ros2 launch assignment1_rt assignment1.launch.py
```

3. open another terminal in the same folder and run the UI node
```bash
source install/setup.bash
ros2 run assignment1_rt UI
```

### Architecture
![RT1_task1_architecture](https://github.com/user-attachments/assets/5152039c-b4b2-4c78-9b16-40943924a45d)

## Note on Python
Python provides faster prototyping, clearer syntax, and more efficient debugging within ROS, especially for nodes involving message handling, control logic, and data processing. This allowed focusing on algorithmic correctness and system behavior rather than compilation overhead. The decision was guided by practicality and reliability.
