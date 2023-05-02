#include <iostream>
using namespace std;

int binarySearchRekursif(int arr[], int low, int high, int x)
{
    if (low > high)
    {
        cout << "Elemen " << x << " tidak ditemukan" << endl;
        return -1;
    }

    int mid = low + (high - low) / 2; // hrusnya int mid = (low + high) / 2;, tp biar ga overflow dibikin gt

    if (arr[mid] == x)
    {
        cout << "Elemen " << x << " ditemukan di indeks " << mid << endl;
        return mid;
    }
    else if (arr[mid] < x)
    {
        return binarySearchRekursif(arr, mid + 1, high, x);
    }
    else
    {
        return binarySearchRekursif(arr, low, mid - 1, x);
    }
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearchRekursif(arr, 0, n - 1, x);
    return 0;
}
