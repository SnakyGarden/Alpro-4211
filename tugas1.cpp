// Judul   : TUGAS 1
// Nama    : RIZQI ADITYA
// Tanggal : 11 MARET 2023
#include <iostream>
using namespace std;

// Kamus :
int bilangan1, bilangan2, bilanganPertama, bilanganKedua, ukuranArray;
int tambah (int a, int b)
{
    int hasilTambah = a + b;
    return hasilTambah;
}
int kurang (int a, int b)
{
    int hasilKurang = a - b;
    return hasilKurang;
}
int hitungJumlah(int arr[], int n)
{
    int jumlah = 0;
    for(int i=0; i<n; i++)
    {
        jumlah += arr[i];
    }
    return jumlah;
}
double hitungRataRata (int arr[], int n)
{
    int jumlah = 0;
    for(int i=0; i<n; i++)
    {
        jumlah += arr[i];
    }
    double rataRata = (double) jumlah/n;
    return rataRata;
}

// Deskripsi :
main()
{
    // PENJUMLAHAN 2 BILANGAN
    cout << "Masukkan Bilangan Pertama" << endl;
    cin >> bilangan1;
    cout << endl;
    cout << "Masukkan Bilangan Kedua" << endl;
    cin >> bilangan2;

    int hasilTambah=tambah(bilangan1, bilangan2);
    cout << "Hasil Penjumlahannya Adalah " << hasilTambah << endl;


    cout << endl;
    cout << endl;


    // PENGURANGAN 2 BILANGAN
    cout << "Masukkan Bilangan Pertama" << endl;
    cin >> bilanganPertama;
    cout << endl;
    cout << "Masukkan Bilangan Kedua" << endl;
    cin >> bilanganKedua;

    int hasilKurang=kurang(bilanganPertama, bilanganKedua);
    cout << "Hasilnya Pengurangannya Adalah " << hasilKurang << endl;


    cout << endl;
    cout << endl;


    // MENGHITUNG TOTAL NILAI ARRAY DAN RATA-RATA NILAI ARRAY
    cout << "Masukkan Ukuran Array" << endl;
    cin >> ukuranArray;
    int array[ukuranArray];
    for(int i=0; i<ukuranArray; i++)
    {
        cout << "Masukkan Nilai Ke " << i+1 << ": " << endl;
        cin >> array[i];
    }
    int total=hitungJumlah(array, ukuranArray);
    cout << "Jumlah Total Nilai Dalam Array Adalah " << total << endl;
    double rataRata = hitungRataRata(array, ukuranArray);
    cout << "Rata-Rata Nilai Dalam Array Adalah " << rataRata << endl;
    return 0;
}
