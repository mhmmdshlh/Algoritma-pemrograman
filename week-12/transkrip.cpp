#include "myLib.hpp"

int main() {
  long long NIM;
  string nama;
  int n;
  cout << "NIM: ";
  cin >> NIM;
  cin.ignore();
  cout << "Nama: ";
  getline(cin, nama);
  cout << "Ada berapa matkul: ";
  cin >> n;
  cin.ignore();
  int nilai[n];
  string matkul[n];
  for (int i = 0; i < n; i++) {
    cout << "Matkul ke-" << i + 1 << ": ";
    getline(cin, matkul[i]);
  }
  for (int i = 0; i < n; i++) {
    cout << "Nilai matkul ke-" << i + 1 << ": ";
    cin >> nilai[i];
  }

  displayTranskrip(NIM, nama, n, matkul, nilai);
}