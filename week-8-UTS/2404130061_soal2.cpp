#include <iostream>
using namespace std;

int main(){
    int n, x, murah=0, sedang=0, mahal=0;
    cin >> n;
    while (n--){
        cin >> x;
        if (x < 100){
            murah += 1;
        }
        else if (x >= 100 && x <= 500){
            sedang += 1;
        } 
        else {
            mahal += 1;
        }
    }
    std::cout << murah << endl << sedang << endl << mahal;

    return 0;
}