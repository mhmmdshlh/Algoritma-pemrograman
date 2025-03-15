#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama;
    int nomor_sepatu;

    getline(cin, nama);
    cin >> nomor_sepatu;

    cout << "Nama: " << nama << endl;
    cout << "Nomor sepatu: " << nomor_sepatu;

	return 0;
}
