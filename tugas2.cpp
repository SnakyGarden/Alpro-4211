// JUDUL : TUGAS 2 ALPRO
// NAMA  : BRUCE WAYNE a.k.a The Dark Knight
#include <iostream>
using namespace std;

// Kamus :
int a, b, x, y;

// FUNGSI INT MAX
int max(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// FUNGSI INT MIN
int min(int x, int y)
{
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

void minmax(int arr[], int size, int& min, int& max) {
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }
}

// Deskripsi :
main()
{
    // INT MAX
    cout << "Masukkan Angka Pertama" << endl;
    cin >> a;
    cout << "Masukkan Angka Kedua" << endl;
    cin >> b;
    int maks = max(a, b);
    cout << "Nilai maksimum dari " << a << " dan " << b << " adalah " << maks << endl;

    cout << endl;
    cout << endl;

    // INT MIN
    cout << "Masukkan Angka Pertama" << endl;
    cin >> x;
    cout << "Masukkan Angka Kedua" << endl;
    cin >> y;
    int mins = min(x, y);
    cout << "Nilai minimum dari " << x << " dan " << y << " adalah " << mins << endl;

    cout << endl;
    cout << endl;

    // ARRAY MAXIMUM MINIMUM
    int arr[] = {10, 5, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    minmax(arr, size, min, max);
    cout << "Nilai minimum dalam array adalah " << min << endl;
    cout << "Nilai maksimum dalam array adalah " << max << endl;

    cout << endl;
    cout << endl;

    // TRUE FALSE
    int a = 5;
    int b = 10;
    bool c = a < b;
    bool d = a > b;
    cout << "Apakah " << a << " kurang dari " << b << "? " << boolalpha << c << endl;
    cout << "Apakah " << a << " lebih dari " << b << "? " << boolalpha << d << endl;

    return 0;
}

