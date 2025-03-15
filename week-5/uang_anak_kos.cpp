#include <iostream>
using namespace std;

int main(){
    int uang_bulanan;
    int bayar_kos = 500000, uang_jajan = 500000, uang_buku = 200000;
    int tiket = 500000, tiket_vip = 1000000;
    const int pengeluaran = bayar_kos + uang_jajan + uang_buku; 
    cout << "Uang bulanan: ";
    cin >> uang_bulanan;

    if (uang_bulanan < 1200000){
        cout << "input tidak valid!" << endl;
        cout << "minimal uang bulanan adalah 1200000";
    }
    else {
        if (uang_bulanan - pengeluaran >= tiket_vip){
            cout << "Soni jadi nonton konser dengan tempat duduk VIP";
        }
        else if (uang_bulanan - pengeluaran >= tiket){
            cout << "Soni jadi nonton konser dengan tempat duduk biasa";
        }
        else{
            cout << "Soni tidak bisa nonton konser karena uangnya kurang";
        }
    }

    return 0;
}