// Author: Mihai Oltean, mihaioltean.github.io, mihai.oltean@gmail.com
// Jenny 5 websites: jenny5.org, jenny5-robot.github.io/
// Jenny 5 source code: github.com/jenny5-robot
// MIT License
//--------------------------------------------------------------

#ifndef POTENTIOMETER_CONTROLLER_H
#define POTENTIOMETER_CONTROLLER_H

#include "Arduino.h"
#include "config.h"


#ifdef USE_POTENTIOMETERS
class t_potentiometer_controller
{
private:
	byte pin;
public:
	t_potentiometer_controller();
	void set_params(byte _pin);
	void get_params(byte *_pin);

	int get_position(void);
	int8_t get_direction(void);
/*
	int get_home_position(void);
	byte is_within_limits(void);
	bool is_lower_bound_reached(void);
	bool is_upper_bound_reached(void);
	*/
};
#endif
#endif
