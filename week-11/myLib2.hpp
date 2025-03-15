#ifndef myLib2_hpp
#define myLib2_hpp

#include <iostream>
using namespace std;

// kasus2
extern bool g_onoff;
extern int g_temp, g_fanlevel;
bool checkOnOff();
void turnOnOff();
void tempUp();
void tempDown();
void fanSpeed();
void powerChill();
void display();

#endif
