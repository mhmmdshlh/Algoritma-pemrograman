#include "myLib3.hpp"

int main() {
  int n;
  cout << "panjang array: ";
  cin >> n;
  float x[n];
  for (int i = 0; i < n; i++) {
    cout << "array[" << i << "]: ";
    cin >> x[i];
  }
  cout << endl;

  cout << "your array: {";
  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      cout << x[i];
    } else {
      cout << x[i] << ", ";
    }
  }
  cout << "}\n";
  sort(x, n);
  cout << "sorted array: {";
  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      cout << x[i];
    } else {
      cout << x[i] << ", ";
    }
  }
  cout << "}\n";
  cout << endl;
  cout << "Jumlah: " << jumlah(x, n) << endl;
  cout << "Rata-rata: " << average(x, n) << endl;
  cout << "Median: " << median(x, n) << endl;
  cout << "Max: " << max(x, n) << endl;
  cout << "Min: " << min(x, n) << endl;

  return 0;
}