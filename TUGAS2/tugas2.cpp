#include <iostream>
using namespace std;

/*HOMEWORK 2
bool isEven
bool isOdd
bool isFactor;
int sumEven
sumOdd
maxN
minN
maxArray
minArray
bool isFound
void swapN*/

// deklarasi sumEven
int sumEven(int a[], int n)
{
    int sumEven = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sumEven += a[i];
        }
    }
    return sumEven;
}

// deklarasi sumOdd
int sumOdd(int a[], int n)
{
    int sumOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sumOdd += a[i];
        }
    }
    return sumOdd;
}

// deklarasi maxN
int maxN(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// deklarasi minN
int maxN(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

// deklarasi maxArray
int maxArray(int a[], int n)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// deklarasi minArray
int minArray(int a[], int n)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// deklarasi isFound
bool isFound(int x, int a[])
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

// fungsi swapN
void swapN(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // bool isEven(int x) : true kalo genap
    bool isEven(int x)
    {
        return (x % 2 == 0);
    }

    // bool isOdd: true kalo ganjil
    bool isOdd(int x)
    {
        return (x % 2 != 0);
    }

    // bool isFactor(int x, int f): true jika f adalah faktor dr x
    bool isFactor(int x, int f)
    {
        return (m % n == 0);
    }

    // int sumEven(int a[])
    int arrEven[] = {6, 7, 8, 9, 10};
    int n = 5;
    int resultEven = sumEven(arrEven, n);
    cout << "jumlah elemen genap dalam array adalah: " << resultEven << endl;

    // int sumOdd
    int arrOdd[] = {1, 2, 3, 4, 5};
    int nOdd = 5;
    int resultOdd = sumEven(arrOdd, nOdd);
    cout << "jumlah elemen ganjil dalam array adalah: " << resultOdd << endl;

    // maxN: mencari nilai terbesar dari 2 bilangan
    int num1 = 10, num2 = 23;
    int max = maxN(num1, num2);
    cout << "Bilangan terbesar adalah: " << max << endl;

    // minN: mencari nilai terkecil dari 2 bilangan
    int num3 = 11, num4 = 2;
    int min = minN(num3, num4);
    cout << "Bilangan tekecil adalah: " << min << endl;

    // maxArray: mencari nilai terbesar di dalam array, a = array, n = panjang array
    int arr[] = {5, 2, 10, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = maxArray(arr, size);
    cout << "Bilangan terbesar dalam array adalah: " << max << endl;

    // minArray: mencari nilai terkecil di dalam array
    int arr[] = {5, 2, 10, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = minArray(arr, size);
    cout << "Bilangan terkecil dalam array adalah: " << min << endl;

    // bool isFound(int x, int a[]): mencari nilai x dalam array a, jika ada = true
    int arr[] = {5, 2, 10, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    if (isFound(x, arr, size))
    {
        cout << "Bilangan " << x << " ditemukan dalam array." << endl;
    }
    else
    {
        cout << "Bilangan " << x << " tidak ditemukan dalam array." << endl;
    }

    // void swapN(int a, int b): menerima 2 bilangan bulat a dan b, kemudian menukar kedua nilai tersebut
    int x = 5;
    int y = 10;
    cout << "Sebelum swap: " << endl;
    cout << "x = " << x << ", y = " << y << endl;
    swapN(x, y);
    cout << "Setelah swap: " << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}