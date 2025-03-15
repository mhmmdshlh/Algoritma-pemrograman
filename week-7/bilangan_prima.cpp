#include <iostream>
using namespace std;

int main(){
    int n;
    bool prima = true;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prima = false;
        }
    }
    if(n < 2){
        cout << n << " bukan bilangan prima";
    }
    else{
        if(prima){
            cout << n << " adalah bilangan prima";
        }
        else{
            cout << n << " adalah bukan bilangan prima";
        }
    }

    return 0;
}