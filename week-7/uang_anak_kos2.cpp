#include <iostream>
using namespace std;

int main(){
    int saldo, pengeluaran;
    cout << "saldo awal: ";
    cin >> saldo;
    while(true){
        cout << "pengeluaran soni hari ini (isikan -1 untuk keluar): ";
        cin >> pengeluaran;
        if (pengeluaran < 0){
            break;
        }
        else if (pengeluaran > saldo){
            cout << "saldo tidak cukup" << endl;
            break;
        }
        else{
            saldo -= pengeluaran;
        }
    }
    cout << "sisa saldo: " << saldo;

    return 0;
}