# turtlenpoly
This is a ros node that utilizes turtlesim to simulate a turtle forming a polygon of a user defined number of sides (from triangle to hexagon).
Follow the following instructions to execute the node.
  1) Ensure that the catkin workspace is set up and create a package using 'catkin_create_pkg turtlenpoly' in the 'src'      directory
    $~/catkin_ws/src
  2) Replace all files in that package folder with the files in this repository
  3) change directory to '~/catkin_ws'
  4) compile the node using 'catkin_make'
  5) setup bash using 'source devel/setup.bash'
  6) run ros ('roscore') and turtlesim ('rosrun turtlesim turtlesim_node') in separate terminal windows
  7) execute the node using 'rosrun turtlenpoly turtlenpoly' 
