#include <iostream>
using namespace std;

int rekursif(int arr[], int x, int low, int high)
{
    if (low > high)
    {
        cout << x << " tidak ditemukan";
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
    {
        cout << x << " ditemukan pada index " << mid << endl;
        return mid;
    }
    else if (arr[mid] < x)
    {
        return rekursif(arr, x, mid + 1, high);
    }
    else
    {
        return rekursif(arr, x, low, mid - 1);
    }
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = rekursif(arr, 0, n - 1, x);
    return 0;
}