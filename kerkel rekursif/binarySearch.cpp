#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int arr[] = {11, 12, 22, 25, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 64;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
    {
        cout << "Elemen tidak ditemukan" << endl;
    }
    else
    {
        cout << "Elemen ditemukan pada indeks ke-" << result << endl;
    }

    return 0;
}
