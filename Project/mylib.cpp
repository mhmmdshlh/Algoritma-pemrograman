#include "mylib.hpp"

const int stok = 100;
string barang[stok];
int harga[stok];
int n = 0;

void input_belanja() {
  cout << "masukkan jumlah barang: ";
  cin >> n;
  if (n <= stok) {
    for (int i = 0; i < n; i++) {
      cin.ignore();
      cout << "barang ke-" << i + 1 << ": ";
      getline(cin, barang[i]);
      cout << "harga barang ke-" << i + 1 << ": ";
      cin >> harga[i];
    }
  } else {
    cout << "kita tidak memiliki stok sebanyak itu..." << endl;
  }
}
void tambah_barang() {
  int m;
  cout << "jumlah barang baru: ";
  cin >> m;
  for (int i = n; i < n + m; i++) {
    cin.ignore();
    cout << "barang ke-" << i + 1 << ": ";
    getline(cin, barang[i]);
    cout << "harga barang ke-" << i + 1 << ": ";
    cin >> harga[i];
  }
  n += m;
}

void daftar_belanja() {
  if (n > 0) {
    for (int i = 0; i < n; i++) {
      cout << barang[i] << ' ' << harga[i] << endl;
    }
  } else {
    cout << "Belum ada barang belanjaan!\n";
  }
}

void cari_barang() {
  if (n > 0) {
    string nama;
    cout << "tuliskan nama barang yang ingin dicari: ";
    cin.ignore();
    getline(cin, nama);
    bool ketemu = false;
    for (int i = 0; i < n; i++) {
      if (barang[i] == nama) {
        ketemu = true;
        cout << nama << " sudah ada di daftar belanjaan, dengan harga "
             << harga[i] << "\n";
      }
    }
    if (!ketemu) {
      cout << nama << " tidak ada di daftar belanjaan!\n";
    }
  } else {
    cout << "Belum ada barang belanjaan!\n";
  }
}

void resi() {
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += harga[i];
  }
  int duit;
  cout << "masukkan uang anda: ";
  cin >> duit;
  while (duit < total) {
    cout << "uang nya kurang!\n";
    cout << "total harga: " << total << endl;
    cout << "masukkan uang anda: ";
    cin >> duit;
  }
  cout << "===================================\n";
  cout << "             IndoApril             \n";
  cout << "===================================\n";
  for (int i = 0; i < n; i++) {
    cout << i + 1 << ". " << barang[i] << " = " << harga[i] << endl;
  }
  cout << "-----------------------------------\n";
  cout << "Total = " << total << endl;
  cout << "Tunai = " << duit << endl;
  cout << "-----------------------------------\n";
  cout << "Kembalian = " << duit - total << endl;
  cout << "-----------------------------------\n";
  cout << "Terimakasih sudah berbelanja di IndoApril!";
}

bool udahInput() { return n > 0; }
