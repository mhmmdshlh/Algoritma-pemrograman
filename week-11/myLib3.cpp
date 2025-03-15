#include "myLib3.hpp"
// kasus 3
float jumlah(float arr[], int size) {
  float hasil = 0;
  for (int i = 0; i < size; i++) {
    hasil += arr[i];
  }
  return hasil;
}
float average(float arr[], int size) { return jumlah(arr, size) / size; }
void sort(float arr[], int size) {
  for (int i = 1; i < size; i++) {
    int loc = i;
    for (int j = loc - 1; j >= 0; j--) {
      if (arr[loc] >= arr[j]) {
        break;
      } else {
        float temp = arr[loc];
        arr[loc] = arr[j];
        arr[j] = temp;
        loc--;
      }
    }
  }
}
float median(float arr[], int size) {
  sort(arr, size);
  if (size % 2 == 1) {
    return arr[(size + 1) / 2 - 1];
  } else {
    return (arr[size / 2 - 1] + arr[size / 2]) / 2;
  }
}
float max(float arr[], int size) {
  sort(arr, size);
  return arr[size - 1];
}
float min(float arr[], int size) {
  sort(arr, size);
  return arr[0];
}