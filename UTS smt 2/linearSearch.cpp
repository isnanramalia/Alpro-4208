#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8; // ini elemen yg akan di search
    int index = linearSearch(arr, n, x);
    if (index == -1)
    {
        cout << "Nilai" << x << " tidak ditemukan dalam array." << endl;
    }
    else
    {
        cout << "Nilai " << x << " ditemukan pada index " << index << "." << endl;
    }
    return 0;
}