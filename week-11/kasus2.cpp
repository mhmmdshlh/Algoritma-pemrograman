#include "myLib2.hpp"

bool g_onoff = false;
int g_temp = 24, g_fanlevel = 2;

int main() {
  cout << "-----------------------" << endl;
  cout << "       AC REMOTE       " << endl;
  cout << "-----------------------" << endl;
  cout << "1. Check on/off" << endl;
  cout << "2. Turn on/off" << endl;
  cout << "3. Temp up" << endl;
  cout << "4. Temp down" << endl;
  cout << "5. Fan speed" << endl;
  cout << "6. Power chill" << endl;
  cout << "7. Display" << endl;
  cout << "0. Exit program" << endl;
  cout << endl;
  while (true) {
    int opt;
    cout << "Select one option: ";
    cin >> opt;
    if (opt == 0) {
      break;
    } else if (opt == 1) {
      string onoff = checkOnOff() ? "on" : "off";
      cout << "AC is " << onoff << endl;
    } else if (opt == 2) {
      turnOnOff();
      string onoff = checkOnOff() ? "on" : "off";
      cout << "Turn " << onoff << " the AC..." << endl;
    } else if (opt == 3) {
      if (checkOnOff()) {
        cout << "Temp +1" << endl;
      }
      tempUp();
    } else if (opt == 4) {
      if (checkOnOff()) {
        cout << "Temp -1" << endl;
      }
      tempDown();
    } else if (opt == 5) {
      if (checkOnOff() && g_fanlevel == 4) {
        cout << "Set fan speed to 1..." << endl;
      } else if (checkOnOff()) {
        cout << "Fan speed +1" << endl;
      }
      fanSpeed();
    } else if (opt == 6) {
      if (checkOnOff()) {
        cout << "Set temp to 18..." << endl;
        cout << "Set fan speed to 4..." << endl;
      }
      powerChill();
    } else if (opt == 7) {
      display();
    } else {
      cout << "please select option in menu!" << endl;
    }
    cout << endl;
  }

  return 0;
}