// Author: Mihai Oltean, mihaioltean.github.io, mihai.oltean@gmail.com
// Jenny 5 websites: jenny5.org, jenny5-robot.github.io/
// Jenny 5 source code: github.com/jenny5-robot
// MIT License
//--------------------------------------------------------------

#ifndef INFRARED_DIGITAL_SENSORS_CONTROLLER_H
#define INFRARED_DIGITAL_SENSORS_CONTROLLER_H

#include "Arduino.h"
#include "infrared_digital.h"

class t_infrared_digital_sensors_controller
{
  public:
    t_infrared_digital_sensor *sensors;
    byte num_sensors;

  public:
    t_infrared_digital_sensors_controller(void);

    int get_value(byte sensor_index);

    void set_params(byte infrared_index, byte pin);
    void get_params(byte infrared_index, byte *pin);

    void set_num_sensors(byte new_num_sensors);
    byte get_num_sensors(void);
};

#endif //INFRARED_SENSORS_CONTROLLER_H
