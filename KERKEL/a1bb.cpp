#include <iostream>
using namespace std;
// PROGRAM SORTING ALGORITHM: INSERTION SORT

void insertionSort(int arr[], int n);

int main()
{
    int arr[] = {6, 20, 4, 10, 2};
    int n = 5;

    cout << "Sebelum diurutkan: ";
    for (int a = 0; a < n; a++)
    {
        cout << arr[a] << " ";
    }
    cout << endl
         << endl;

    insertionSort(arr, n);
    cout << endl
         << "Setelah diurutkan : ";
    for (int a = 0; a < n; a++)
    {
        cout << arr[a] << " ";
    }
    cout << endl;

    return 0;
}

void insertionSort(int arr[], int n)
{
    int temp;

    for (int b = 1; b < n; b++)
        for (int c = b; c > 0; c--)
        {
            if (arr[c] < arr[c - 1])
            {
                temp = arr[c];
                arr[c] = arr[c - 1];
                arr[c - 1] = temp;
            }
            else
            {
                break;
            }

            cout << "----------proses penukaran data----------" << endl;
            cout << "index ke-" << b << " -> ";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
}
}
