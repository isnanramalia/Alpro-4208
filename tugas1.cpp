#include <iostream>
using namespace std;

// deklarasi nomor 1
int tambah(int a, int b)
{
    int x;
    x = a + b;
    return x;
}

// deklarasi nomor 2
int kurang(int c, int d)
{
    int y;
    y = c - d;
    return y;
}

// deklasrasi nomor 3
void totalValue(int array[], int n, int &sum);

// deklarasi nomor 4
void averageArray(int arr[], int size)
{
    int jumlah = 0;
    for (int i = 0; i < size; i++)
    {
        jumlah += arr[i];
    }
    int averageArray = jumlah / size;
    cout << "Rata-rata elemen array: " << averageArray;
    cout << endl;
}

int main()
{
    /*TUGAS1 MINGGU 2
    1. Penambahan 2 bilangan
    2. Pengurangan 2 bilangan
    3. Total value elemen dalam array
    4. Rata-rata elemen array*/

    // nomor 1
    int a = 3;
    int b = 4;
    cout << "Hasil penambahan: " << tambah(a, b);
    cout << endl;

    // nomor 2
    int c = 5;
    int d = 2;
    cout << "Hasil pengurangan: " << kurang(c, d);
    cout << endl;

    // nomor 3
    int array[] = {1, 2, 3, 4, 5};
    const int n = 5;
    int sum = 0;
    totalValue(array, n, sum);
    cout << "Total value elemen dalam array: " << sum;
    cout << endl;

    // nomor 4
    int arr[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    averageArray(arr, size);

    return 0;
}

// definisi nomor 3
void totalValue(int array[], int n, int &sum)
{
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
}
