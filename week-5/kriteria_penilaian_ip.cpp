#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "nilai rata-rata: ";
    cin >> nilai;

    if (nilai >= 0 && nilai < 101){
        if (nilai <= 50){
            cout << 'E' << endl;
            cout << "IP: 0.00";
        }
        else if (nilai <= 55){
            cout << 'D' << endl;
            cout << "IP: 1.00";
        }
        else if (nilai <= 60){
            cout << "CD" << endl;
            cout << "IP: 1.50";
        }
        else if (nilai <= 65){
            cout << 'C' << endl;
            cout << "IP: 2.00";
        }
        else if (nilai <= 70){
            cout << "BC" << endl;
            cout << "IP: 2.50";
        }
        else if (nilai <= 80){
            cout << 'B' << endl;
            cout << "IP: 3.00";
        }
        else if (nilai <= 85){
            cout << "AB" << endl;
            cout << "IP: 3.50";
        }
        else {
            cout << 'A' << endl;
            cout << "IP: 4.00";
        }
    }
    else 
    {
        cout << "masukkan nilai rata-rata yang valid (0-100)";
    }

    return 0;
}
