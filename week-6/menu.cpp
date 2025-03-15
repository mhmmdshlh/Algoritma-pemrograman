#include <iostream>
using namespace std;

int main() {
  int n;
  do {
    cout << "silahkan pilih menu (1-2) atau ketik 0 untuk keluar\n";
    cout << "1. Mau makan\n";
    cout << "2. Lihat makanan\n";
    cout << "Respon: ";
    cin >> n;
    if (n == 1) {
      cout << "makan bang\n";
    } else if (n == 2) {
      cout << "ada banyak makanannya\n";
    } else if (n != 0) {
      cout << "ga ada makanannya\n";
    }
  } while (n);

  return 0;
}