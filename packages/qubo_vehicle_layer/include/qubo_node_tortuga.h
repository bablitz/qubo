//!  This is the abstract base class that all our vehicle nodes should inherit from

/*! 
 * The basic idea to have a real and a simulated version of every sensor, BOTH will inherit 
 * From this class, which means we call both the real and the simulated nodes in exactly the same manner.
 *
 * We have a publish and an update method that we insist all inherited classes use
 * We also go ahead and make a node handle and a publisher variable here. 
 * 
 * The REASON we insist everything implement an update method rather than just using ros::spin or something like that 
 * is so we can update the real sensors correctly. 
 */


#ifndef QUBONODE_HEADER
#define QUBONODE_HEADER

#define BOARD_NAME "name"

#include "ros/ros.h"
#include "ros/console.h"
#include <iostream>
#include "std_msgs/String.h"
#include <sstream>
#include <thread>
#include "sensorapi.h"

class QuboNode {
 public:
 
  QuboNode(){}; /**<Constructor, you should really never call this directly */
  ~QuboNode(){}; //Destructor 

 
  virtual void update() = 0;
  virtual void publish() = 0;
  //void sendAction(){};  // this isn't a pure function because sub classes won't necessarily use it.
  void sleep() {
    ros::Rate loop_rate(rate);
    loop_rate.sleep();
  }
  static void runThread(QuboNode *node) {
    while (ros::ok()) {
      node->update();
      node->publish();
      node->sleep();
    }
  }

  /*
    Error codes are defined in sensorapi.h
     Use this function to log check if an error has occured using sensorapi
     Returns if an error happened and logs it
  */
  static bool checkError(int e) {
    switch(e) {
    case SB_IOERROR:
      ROS_DEBUG("IO ERROR in node %s", name);
      return true;
    case SB_BADCC:
      ROS_DEBUG("BAD CC ERROR in node %s", name);
      return true;
    case SB_HWFAIL:
      ROS_DEBUG("HW FAILURE ERROR in node %s", name);
      return true;
    case SB_ERROR:
      ROS_DEBUG("ERROR in node %s", name);
      return true;
    default:
      return false;
    }
  }

  //We'll probably need a few more things 
 protected:
  ros::NodeHandle n; /**< the handle for the whole node */
  ros::Publisher publisher; /** simulated or real, we'll need a subscriber either way. */
  int rate;
  std::string name;
  static const int fd = openSensorBoard(BOARD_NAME)
};


#endif
