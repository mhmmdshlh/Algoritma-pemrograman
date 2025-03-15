#include <iostream>
using namespace std;

int main(){
    int n, x, jumlah = 0;
    cin >> n;
    while (n--){
        cin >> x;
        if (x > 100){
            jumlah += 1;
        }
    }
    cout << jumlah;

    return 0;
}