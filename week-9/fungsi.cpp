#include <iostream>
using namespace std;

// Menghitung penjumlahan dari 2 bilangan yaitu int a dan int b 
int tambah(int a, int b){
    return a+b;
}

// Menghitung pengurangan dari 2 bilangan yaitu int a dan int b 
int kurang(int a, int b){
    return a-b;
}

// Menghitung perkalian dari 2 bilangan yaitu int a dan int b 
int kali(int a, int b){
    return a*b;
}

// Menghitung pembagian dari 2 bilangan yaitu int a dan int b 
int bagi(int a, int b){
    return a/b;
}

// Menghitung luas persegi 
float luasPersegi(float sisi){
    return sisi*sisi;
}

// Menghitung luas segitiga
float luasSegitiga(float alas, float tinggi){
    return alas*tinggi/2;
}

int main(){
    int a, b;
    float sisi, alas, tinggi;
    cin >> a >> b;
    cout << tambah(a,b) << endl;
    cout << kurang(a,b) << endl;
    cout << kali(a,b) << endl;
    cout << bagi(a,b) << endl;
    cin >> sisi;
    cout << luasPersegi(sisi) << endl;
    cin >> alas >> tinggi;
    cout << luasSegitiga(alas, tinggi) << endl;

    return 0;
}