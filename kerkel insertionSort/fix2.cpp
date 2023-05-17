#include <iostream>
using namespace std;

void insertionSort(int arr[], int n);

int main()
{
    int arr[] = {6, 20, 4, 10, 2}; // array berisi 5 index yg blm urut
    int n = 5;                     // jumlah index dalam array

    cout << "Sebelum diurutkan: ";
    for (int a = 0; a < n; a++)
    { // menampilkan data yg blm diurutkan
        cout << arr[a] << " ";
    }
    cout << endl
         << endl;

    insertionSort(arr, n); // utk melakukan proses pengurutan pada array yg diberikan

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