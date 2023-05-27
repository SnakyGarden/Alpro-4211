// Nama : Rizqi Aditya
// NIM  : A11.2022.14411
// Kel  : A11.4211
#include <iostream>
using namespace std;

// Kamus :

// Fungsi untuk mencari nilai maksimum
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Fungsi untuk mencari nilai minimum
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Fungsi untuk mencari nilai maksimum dalam sebuah array
int maxArray(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

// Fungsi untuk mencari nilai minimum dalam sebuah array
int minArray(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

// Fungsi untuk memeriksa apakah sebuah bilangan genap
bool isEven(int num) {
    return (num % 2 == 0);
}

// Fungsi untuk memeriksa apakah sebuah bilangan ganjil
bool isOdd(int num) {
    return (num % 2 != 0);
}

// Fungsi untuk memeriksa apakah num adalah faktor dari base
bool isFactor(int base, int num) {
    return (base % num == 0);
}

// Fungsi untuk menjumlahkan bilangan genap dalam sebuah array
int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

// Fungsi untuk menjumlahkan bilangan ganjil dalam sebuah array
int sumOdd(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0)
            sum += arr[i];
    }
    return sum;
}

// Deskripsi :
int main() {
    int a = 5, b = 3;

    std::cout << "Nilai maksimum antara " << a << " dan " << b << " adalah: " << max(a, b) << std::endl;
    std::cout << "Nilai minimum antara " << a << " dan " << b << " adalah: " << min(a, b) << std::endl;

    int arr[] = { 2, 5, 8, 1, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Nilai maksimum dalam array adalah: " << maxArray(arr, size) << std::endl;
    std::cout << "Nilai minimum dalam array adalah: " << minArray(arr, size) << std::endl;

    int num = 4;
    std::cout << num << " adalah bilangan " << (isEven(num) ? "genap" : "ganjil") << std::endl;

    num = 9;
    std::cout << num << " adalah bilangan " << (isOdd(num) ? "ganjil" : "genap") << std::endl;

    int base = 10

