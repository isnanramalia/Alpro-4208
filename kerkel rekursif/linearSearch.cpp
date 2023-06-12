#include <iostream>
using namespace std;

int linearSearch(int arr[], int start, int end, int key)
{
    if (start > end)
        return -1;
    if (arr[start] == key)
        return start;

    return linearSearch(arr, start + 1, end, key);
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 22;

    int result = linearSearch(arr, 0, n - 1, key);

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
