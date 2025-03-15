#include "mylib.hpp"

int main() {
  bool loop = true;
  while (loop) {
    cout << "1. input belanjaan\n";
    cout << "2. lihat barang belanjaan\n";
    cout << "3. cari barang belanjaan\n";
    cout << "4. tambah barang\n";
    cout << "5. cetak resi\n";
    cout << "0. keluar dari program\n";
    int opt;
    cout << "pilih salah satu opsi: ";
    cin >> opt;
    switch (opt) {
    case 1:
      cout << "-----------------------------------\n";
      input_belanja();
      cout << "-----------------------------------\n";
      break;

    case 2:
      cout << "-----------------------------------\n";
      daftar_belanja();
      cout << "-----------------------------------\n";
      break;

    case 3:
      cout << "-----------------------------------\n";
      cari_barang();
      cout << "-----------------------------------\n";
      break;

    case 4:
      if (udahInput()) {
        cout << "-----------------------------------\n";
        tambah_barang();
        cout << "-----------------------------------\n";
      } else {
        cout << "-----------------------------------\n";
        cout << "Input dulu!\n";
        cout << "-----------------------------------\n";
      }
      break;

    case 5:
      if (udahInput()) {
        resi();
        loop = false;
      } else {
        cout << "-----------------------------------\n";
        cout << "Belum ada barang belanjaan!\n";
        cout << "-----------------------------------\n";
      }
      break;

    case 0:
      loop = false;
      break;

    default:
      cout << "Pilih yang ada di menu!\n";
      break;
    }
  }

  return 0;
}