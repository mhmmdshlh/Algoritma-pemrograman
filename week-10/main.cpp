#include "myLib.hpp"

int main() {
  int a = 3, b = 5;
  cout << tambah(a, b) << endl;
  cout << kurang(a, b) << endl;
  cout << kali(a, b) << endl;
  cout << bagi(a, b) << endl;
  cout << luasPersegi(2.4) << endl;
  cout << luasSegitiga(2.4, 5) << endl;

  hello("World");

  return 0;
}