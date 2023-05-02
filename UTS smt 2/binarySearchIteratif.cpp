#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    sort(arr, arr + n);
    int index = binarySearch(arr, n, x);
    if (index == -1)
    {
        cout << "Nilai " << x << " tidak ditemukan dalam array." << endl;
    }
    else
    {
        cout << "Nilai " << x << " ditemukan pada index " << index << "." << endl;
    }
    return 0;
}