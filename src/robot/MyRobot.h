//A robot class to share data between listeners
#include "Arduino.h"

#if !defined(MYROBOT)
#define MYROBOT

class MyRobot {
private:
	String * name;
public:
	MyRobot() ;
	void loop();
	String * getName();
};

#endif
