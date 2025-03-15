#include "myLib1.hpp"

// kasus 1
void habisDibagi10(int n) {
  string out = n % 10 == 0 ? "hore" : "yah";
  cout << out << endl;
}
void cetakPersegi(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
void cetakSegitigaSikuSiku(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - i; j <= n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
void cetakSegitigaSamaKaki(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n - 1; j++) {
      cout << ' ';
    }
    for (int j = n - i; j <= n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}