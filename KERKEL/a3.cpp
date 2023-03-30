#include <iostream>
using namespace std;
// pemanggilan fungsi dilakukan di definisi dg input -> a2 dg input

void insertionSort(int arr[], int n);

int main()
{
    int n;

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen-elemen dalam array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Array yang telah diurutkan: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Pindahkan elemen-elemen yang lebih besar dari key ke posisi setelahnya */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
