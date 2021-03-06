#ifndef TRANSLATIONAL_CONTROLLER_H
#define TRANSLATIONAL_CONTROLLER_H

// ROS includes.
#include "ros/ros.h"
#include <nav_msgs/Odometry.h>
#include "std_msgs/Int64MultiArray.h"
//#include "tortuga/sensorapi.h"


// Custom message includes. Auto-generated from msg/ directory.
#include <sensor_msgs/Joy.h>

#define MAX_THRUSTER_SPEED 255

class TranslationalController  {
    
    public:
    //! Constructor.
    TranslationalController(std::shared_ptr<ros::NodeHandle>, int);
		
    void update();
    //! Destructor.
    ~TranslationalController();
    
    private:
    
    //! Callback function for subscriber.
    void currentStateCallback(const nav_msgs::OdometryConstPtr &current);
    void nextStateCallback(const nav_msgs::OdometryConstPtr &next);
    ros::Subscriber current_state_sub;
    ros::Subscriber next_state_sub;
    ros::Publisher thrust_pub;
    //SG: why not an array ?
    int thrstr_1_spd, thrstr_2_spd, thrstr_3_spd, thrstr_4_spd, thrstr_5_spd, thrstr_6_spd;
    float x_t, y_t, z_t, vx_t, vy_t, vz_t;
    float K_p = 1, K_d = 1, K_i = 1, dt = 0.1;
    float sum_error_x = 0, sum_error_y = 0, sum_error_z = 0;
    float previous_error_x = 0, previous_error_y = 0, previous_error_z = 0;
};

#endif // TRANSLATIONAL_CONTROLLER_H

