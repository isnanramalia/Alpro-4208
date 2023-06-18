#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    if (n == 1)
        return;

    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(&arr[minIndex], &arr[n - 1]);

    selectionSort(arr, n - 1);
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Hasil Selection Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}