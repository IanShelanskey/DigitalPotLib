//  DigitalPot.h
/*
 Coded by Ian Shelanskey ( ianshela@buffalo.edu )
 Design by Lynne Koscielniak with Dyan Burlingame (lk2@buffalo.edu,dlo@buffalo.edu)
 
 * Date : 6/11/13
 * All code (c)2013 all rights reserved
 
 
 Project MIST
 supported by University at Buffalo's TECHNE Institute for Arts and Emerging Technologies
 
 A library for communicating with a MCP4131 Digital Potentiometer in a
 current modulation circuit for controlling a CTM.
 To be used in conjucture with the CTMEffect Library, as well as any
 program for a "Droplet"
 ------------------------------------------------
 Library methods:
 
 DigitalPot init -- selects which Arduino pins are slave selects for the Digital Pots.
 
 set(int value) -- Sets the digital potentiometer to a value. The MCP4131 uses values between 0-127, while a user would pass along a value from 0-255. The passed value is mapped to 0-127.
 
 get() -- Returns current value of potentiometer for debugging and loop breaks.
 
 -------------------------------------------------
 */

#ifndef _DigitalPot_h
#define _DigitalPot_h


#include "Arduino.h"
#include <SPI.h>

class DigitalPot
{
public:
    DigitalPot(int slave);
    void set(int value);
    int  get();
    
private:
    int _slave;
    int _value;
};

#endif
