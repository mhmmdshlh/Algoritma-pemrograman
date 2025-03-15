#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "nilai rata-rata: ";
    cin >> nilai;

    if (nilai >= 0 && nilai < 101){
        if (nilai <= 50){
            cout << 'E';
        }
        else if (nilai <= 55){
            cout << 'D';
        }
        else if (nilai <= 60){
            cout << "CD";
        }
        else if (nilai <= 65){
            cout << 'C';
        }
        else if (nilai <= 70){
            cout << "BC";
        }
        else if (nilai <= 80){
            cout << 'B';
        }
        else if (nilai <= 85){
            cout << "AB";
        }
        else {
            cout << 'A';
        }
    }
    else 
    {
        cout << "masukkan nilai rata-rata yang valid (0-100)";
    }

    return 0;
}
