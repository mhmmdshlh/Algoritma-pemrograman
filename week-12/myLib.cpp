#include "myLib.hpp"
#include <iomanip>

void displayTranskrip(long long NIM, string nama, int n, string matkul[],
                      int nilai[]) {
  string nilai_huruf[n];
  for (int i = 0; i < n; i++) {
    if (nilai[i] <= 50) {
      nilai_huruf[i] = 'E';
    } else if (nilai[i] <= 55) {
      nilai_huruf[i] = 'D';
    } else if (nilai[i] <= 60) {
      nilai_huruf[i] = "CD";
    } else if (nilai[i] <= 65) {
      nilai_huruf[i] = 'C';
    } else if (nilai[i] <= 70) {
      nilai_huruf[i] = "BC";
    } else if (nilai[i] <= 80) {
      nilai_huruf[i] = 'B';
    } else if (nilai[i] <= 85) {
      nilai_huruf[i] = "AB";
    } else {
      nilai_huruf[i] = 'A';
    }
  }

  float ipk[n];
  for (int i = 0; i < n; i++) {
    if (nilai_huruf[i] == "A") {
      ipk[i] = 4;
    } else if (nilai_huruf[i] == "AB") {
      ipk[i] = 3.5;
    } else if (nilai_huruf[i] == "B") {
      ipk[i] = 3;
    } else if (nilai_huruf[i] == "BC") {
      ipk[i] = 2.5;
    } else if (nilai_huruf[i] == "C") {
      ipk[i] = 2;
    } else if (nilai_huruf[i] == "CD") {
      ipk[i] = 1.5;
    } else if (nilai_huruf[i] == "D") {
      ipk[i] = 1;
    } else if (nilai_huruf[i] == "E") {
      ipk[i] = 0;
    }
  }

  float jumlah = 0;
  for (float a : ipk) {
    jumlah += a;
  }
  float IPK = jumlah / n;
  string cumlaude;
  if (IPK >= 3.5) {
    cumlaude = "Cumlaude";
  } else {
    cumlaude = "Tidak Cumlaude";
  }

  cout << "NIM: " << NIM << endl;
  cout << "Nama: " << nama << endl;
  for (int i = 0; i < n; i++) {
    cout << "Matkul " << matkul[i] << " Nilai angka " << nilai[i]
         << " Nilai huruf " << nilai_huruf[i] << endl;
  }
  cout << "IPK: " << fixed << setprecision(2) << IPK << endl;
  cout << "Keterangan: " << cumlaude << endl;
}