#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{ // utk melakukan proses pengurutan pada array yg diberikan
    int temp;

    // proses insertion sort
    for (int b = 1; b < n; b++) // menentukan elemen yg akan di proses
    {
        for (int c = b; c > 0; c--) // membandingkan elemen tsb dgn elemen lain dlm urutan yg sedang di proses
        {                           // membandingkan index dgn angka sebelah kiri
            if (arr[c] < arr[c - 1])
            { // apabila index kurang dari angka sebelah kiri
                temp = arr[c];
                arr[c] = arr[c - 1];
                arr[c - 1] = temp;
            }
            else
            {
                break;
            }

            // untuk membandingkan index keberapa dengan angka disebelah kirinya
            cout << "----------proses penukaran data----------" << endl;
            cout << "index ke-" << b << " -> ";
            for (int i = 0; i < n; i++)
            { // menguji apakah pertukaran data sesuai
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

void tampilArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {6, 20, 4, 10, 2}; // array berisi 5 index yg blm urut
    int n = 5;                     // jumlah index dalam array

    cout << "Sebelum diurutkan: ";
    tampilArray(arr, n);
    cout << endl
         << endl;

    insertionSort(arr, n);

    cout << endl
         << "Setelah diurutkan : ";
    tampilArray(arr, n);
    cout << endl;

    return 0;
}
