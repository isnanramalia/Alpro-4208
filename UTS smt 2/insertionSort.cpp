#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) // mencari index utama yg akan di compare
    {
        key = arr[i];
        j = i - 1;

        // Geser elemen-elemen yang lebih besar dari key ke posisi setelahnya
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
