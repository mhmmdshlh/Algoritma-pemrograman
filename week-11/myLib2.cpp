#include "myLib2.hpp"
// kasus 2
bool checkOnOff() { return g_onoff; }
void turnOnOff() {
  if (checkOnOff()) {
    g_onoff = false;
  } else {
    g_onoff = true;
  }
}
void tempUp() {
  if (checkOnOff()) {
    g_temp += 1;
  } else {
    cout << "please turn on the AC first!" << endl;
  }
}
void tempDown() {
  if (checkOnOff()) {
    g_temp -= 1;
  } else {
    cout << "please turn on the AC first!" << endl;
  }
}
void fanSpeed() {
  if (checkOnOff()) {
    g_fanlevel += 1;
  } else {
    cout << "please turn on the AC first!" << endl;
  }
  if (g_fanlevel > 4) {
    g_fanlevel %= 4;
  }
}
void powerChill() {
  if (checkOnOff()) {
    g_temp = 18;
    g_fanlevel = 4;
  } else {
    cout << "please turn on the AC first!" << endl;
  }
}
void display() {
  if (checkOnOff()) {
    cout << "Temperature: " << g_temp << endl;
    cout << "Fan speed: " << g_fanlevel << endl;
  } else {
    cout << "please turn on the AC first!" << endl;
  }
}
