#include <iostream>
#include <algorithm>
using namespace std;

int iteratif(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low >= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 7};
    int n = sizeof(arr) / sizeof(arr[]);
    int x = 5;
    sort(arr, arr + 1);
    int index = iteratif(arr, n, x);

    if (index == -1)
        cout << x << " tidak ditemukan" << endl;
    else
        cout << x << " ditemukan di index " << index << endl;
}