// This program publishes randomly-generated velocity
// messages for turtlesim.
// This program was writen by Javier Perez Jr. - 1595083
#include <ros/ros.h>
#include <iostream>
#include <geometry_msgs/Twist.h>  // For geometry_msgs::Twist
#include <stdlib.h> // For rand() and RAND_MAX
using namespace std;

int main(int argc, char **argv) {
  // Initialize the ROS system and become a node.
	ros::init(argc, argv, "publish_velocity");
	ros::NodeHandle nh;

  // Create a publisher object.
  ros::Publisher pub = nh.advertise<geometry_msgs::Twist>(
    "turtle1/cmd_vel", 1000);
	int sides;
  // Seed the random number generator.
  //srand(time(0));
    
  // Loop at 2Hz until the node is shut down.
  ros::Rate rate(.75);
	int i = 0;
	cout<<"Please enter number of sides for a polygon (3-6): ";
	cin>>sides;
	cout<<"Number of sides = "<<sides<<"\n";
	
	// 3 Sides (Triangle)
	if(sides == 3)
	{		
		while(ros::ok() && i++ < sides){
			// Create and fill in the message.  The other four
			// fields, which are ignored by turtlesim, default to 0.
			geometry_msgs::Twist msg;
			rate.sleep();
			msg.linear.x = double(2);
			msg.angular.z = double(0);
			
			// Publish the message.
			pub.publish(msg);	  
			
			// Send a message to rosout with the details.
			ROS_INFO_STREAM("Sending random velocity command:"
							<< " linear=" << msg.linear.x
							<< " angular=" << msg.angular.z);
			
			rate.sleep();
			
			msg.linear.x = double(0);
			msg.angular.z = double(2.09);
			
			// Publish the message.
			pub.publish(msg);
			
			// Send a message to rosout with the details.
			ROS_INFO_STREAM("Sending random velocity command:"
							<< " linear=" << msg.linear.x
							<< " angular=" << msg.angular.z);    // Wait until it's time for another iteration.
			rate.sleep();
			}
		}
	// 4 sides (Square)
	else if(sides == 4)
	{		
		while(ros::ok() && i++ < sides){
			// Create and fill in the message.  The other four
			// fields, which are ignored by turtlesim, default to 0.
			geometry_msgs::Twist msg;
			rate.sleep();
			msg.linear.x = double(2);
			msg.angular.z = double(0);
			
			// Publish the message.
			pub.publish(msg);	  
			
			// Send a message to rosout with the details.
			ROS_INFO_STREAM("Sending random velocity command:"
							<< " linear=" << msg.linear.x
							<< " angular=" << msg.angular.z);
			
			rate.sleep();
			
			msg.linear.x = double(0);
			msg.angular.z = double(1.56);
			
			// Publish the message.
			pub.publish(msg);
			
			// Send a message to rosout with the details.
			ROS_INFO_STREAM("Sending random velocity command:"
							<< " linear=" << msg.linear.x
							<< " angular=" << msg.angular.z);    // Wait until it's time for another iteration.
			rate.sleep();
			}
		}
	// 5 sides (Pentagon)
	else if(sides == 5)
	{		
		while(ros::ok() && i++ < sides){
			// Create and fill in the message.  The other four
			// fields, which are ignored by turtlesim, default to 0.
			geometry_msgs::Twist msg;
			rate.sleep();
			msg.linear.x = double(2);
			msg.angular.z = double(0);
			
			// Publish the message.
			pub.publish(msg);	  
			
			// Send a message to rosout with the details.
			ROS_INFO_STREAM("Sending random velocity command:"
							<< " linear=" << msg.linear.x
							<< " angular=" << msg.angular.z);
			
			rate.sleep();
			
			msg.linear.x = double(0);
			msg.angular.z = double(1.25);
			
			// Publish the message.
			pub.publish(msg);
			
			// Send a message to rosout with the details.
			ROS_INFO_STREAM("Sending random velocity command:"
							<< " linear=" << msg.linear.x
							<< " angular=" << msg.angular.z);    // Wait until it's time for another iteration.
			rate.sleep();
			}
		}
	// 6 sides (Hexagon)
	else if(sides == 6)
	{		
		while(ros::ok() && i++ < sides){
			// Create and fill in the message.  The other four
			// fields, which are ignored by turtlesim, default to 0.
			geometry_msgs::Twist msg;
			rate.sleep();
			msg.linear.x = double(2);
			msg.angular.z = double(0);
			
			// Publish the message.
			pub.publish(msg);	  
			
			// Send a message to rosout with the details.
			ROS_INFO_STREAM("Sending random velocity command:"
							<< " linear=" << msg.linear.x
							<< " angular=" << msg.angular.z);
			
			rate.sleep();
			
			msg.linear.x = double(0);
			msg.angular.z = double(1.04);
			
			// Publish the message.
			pub.publish(msg);
			
			// Send a message to rosout with the details.
			ROS_INFO_STREAM("Sending random velocity command:"
							<< " linear=" << msg.linear.x
							<< " angular=" << msg.angular.z);    // Wait until it's time for another iteration.
			rate.sleep();
			}
		}
	else ROS_INFO_STREAM("Please select a number between 3 and 6!");
} // This program was written by Javier Perez Jr. - 1595083