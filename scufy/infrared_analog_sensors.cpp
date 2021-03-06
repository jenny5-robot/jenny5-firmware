// Author: Mihai Oltean, mihaioltean.github.io, mihai.oltean@gmail.com
// Jenny 5 websites: jenny5.org, jenny5-robot.github.io/
// Jenny 5 source code: github.com/jenny5-robot
// MIT License
//--------------------------------------------------------------

#include "infrared_analog_sensors.h"


t_infrared_analog_sensors_controller::t_infrared_analog_sensors_controller(void)
{
  num_sensors = 0;
  sensors = NULL;
}
//--------------------------------------------------------------------
int t_infrared_analog_sensors_controller::get_signal_strength(byte infrared_index)
{
  return sensors[infrared_index].get_signal_strength();
}
//--------------------------------------------------------------------
void t_infrared_analog_sensors_controller::set_params(byte infrared_index, byte pin)
{
  sensors[infrared_index].set_params(pin);
}
//--------------------------------------------------------------------
void t_infrared_analog_sensors_controller::get_params(byte infrared_index, byte *pin)
{
  sensors[infrared_index].get_params(pin);
}
//--------------------------------------------------------------------
void t_infrared_analog_sensors_controller::set_num_sensors(byte new_num_sensors)
{
  if (new_num_sensors != num_sensors){
    num_sensors = new_num_sensors;
    if (sensors)
      delete[] sensors;

    if (num_sensors > 0){    
      sensors = new t_infrared_analog_sensor[num_sensors];
      
      for (byte m = 0; m < num_sensors; m++)
        sensors[m].set_params(2);
    }
    else
      sensors = NULL;
  } 
}
//--------------------------------------------------------------------
byte t_infrared_analog_sensors_controller::get_num_sensors(void)
{
  return num_sensors;
}
//--------------------------------------------------------------------