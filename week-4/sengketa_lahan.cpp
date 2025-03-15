#include <iostream>
using namespace std;

int main(){
    float panjang, lebar;
    string acc;
    bool setuju;

    cout << "panjang: ";
    cin >> panjang;
    cout << "lebar: ";
    cin >> lebar;
    
    cout << "luas tanah: " << panjang*lebar << endl;

    cout << "setuju/tidak setuju: ";
    cin >> acc;
    setuju = (acc == "setuju")? true : false;

    if (setuju){
        cout << "Tanah terjual!!" << endl;
        cout << "Luas tanah yang dimiliki Pak Joni atau Pak Soni adalah " << panjang*lebar/2;
    } else{
        cout << "Tanah Pak Eko tidak jadi dijual karena Pak Joni dan Pak Soni tidak setuju";
    }

    return 0;
}