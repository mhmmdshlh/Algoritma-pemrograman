#include <iostream>
using namespace std;

int main()
{
    float t, vt, a, vo = 0;

    cin >> t;
    cin >> vt;

    a = (vt - vo) / t;
    cout << a;
    
    return 0;
}