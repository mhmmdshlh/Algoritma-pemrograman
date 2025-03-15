#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nama;
	long NIM;
	int tinggi_badan;
	
	cout << "Aku baru mengalami kecelakaan, dan aku lupa nama, NIM, dan tinggi badanku" << endl;
	cout << "Tolong inputkan nama, NIM, dan tinggi badanku!" << endl;
	
	cout << "Nama: ";
	getline(cin, nama);
	cout << "NIM: ";
	cin >> NIM;
	cout << "Tinggi badan: ";
	cin >> tinggi_badan;

	cout << "\nTerimakasih, berkatmu aku tahu" << endl;
	cout << "Namaku adalah " << nama << endl;
	cout << "NIM ku " << NIM << endl;
	cout << "Tinggi badanku " << tinggi_badan;
	return 0;
}
