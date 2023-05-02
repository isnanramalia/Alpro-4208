#include <iostream>
using namespace std;

void bubble(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "array sebelum disorting: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i];
    cout << endl;

    bubble(arr, n);

    cout << "array sebelum disorting: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i];
    cout << endl;
}