// Nama : Rizqi Aditya
// NIM  : A11.2022.14411
// Kel  : A11.4211
#include <iostream>
using namespace std;

// Kamus :

// Fungsi Rekursif untuk Penjumlahan
int penjumlahan(int a, int b) {
    if (b == 0)
        return a;
    else
        return penjumlahan(a + 1, b - 1);
}

// Fungsi Rekursif untuk Pengurangan
int pengurangan(int a, int b) {
    if (b == 0)
        return a;
    else
        return pengurangan(a - 1, b - 1);
}

// Fungsi Rekursif untuk Pembagian
int pembagian(int a, int b) {
    if (a < b)
        return 0;
    else
        return 1 + pembagian(a - b, b);
}

// Fungsi Rekursif untuk Perkalian
int perkalian(int a, int b) {
    if (b == 0 || a == 0)
        return 0;
    else
        return a + perkalian(a, b - 1);
}

// Fungsi Rekursif untuk Pangkat
int pangkat(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * pangkat(a, b - 1);
}

// Deskripsi :
int main() {
    int a, b;

    cout << "Masukkan dua bilangan bulat: ";
    cin >> a >> b;

    cout << "Penjumlahan: " << penjumlahan(a, b) << endl;
    cout << "Pengurangan: " << pengurangan(a, b) << endl;
    cout << "Pembagian: " << pembagian(a, b) << endl;
    cout << "Perkalian: " << perkalian(a, b) << endl;
    cout << "Pangkat: " << pangkat(a, b) << endl;

    return 0;
}
