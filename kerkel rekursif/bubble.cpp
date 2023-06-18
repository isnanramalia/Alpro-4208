#include <iostream>
using namespace std;

void bubble(int arr[], int n)
{
    if (n == 1) // base case
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubble(arr, n - 1); // rekursif
}

int main()
{
    int arr[] = {64, 34, 25, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble(arr, n);

    cout << "Hasil Bubble Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}