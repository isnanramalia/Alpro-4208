#include <iostream>
using namespace std;

int main()
{
    int x[] = {3, 2, 6, 5, 4};      // array berisi 5 index yg blm urut
    int j = sizeof(x) / sizeof(*x); // jumlah index dalam array
    int temp;

    cout << "Sebelum diurutkan : ";
    for (int a = 0; a < j; a++)
    { // menampilkan data yg blm diurutkan
        cout << x[a] << " ";
    }
    cout << endl;
    cout << endl;

    // proses insertion sort
    for (int b = 1; b < j; b++)
    {
        for (int c = b; c > 0; c--)
        { // membandingkan index dgn angka sebelah kiri
            if (x[c] < x[c - 1])
            { // apabila index kurang dari angka sebelah kiri
                temp = x[c];
                x[c] = x[c - 1];
                x[c - 1] = temp;
            }
            else
            {
                break;
            }
            // untuk membandingkan index keberapa dengan angka disebelah kirinya
            cout << "----------proses penukaran data----------" << endl;
            cout << "index ke-" << b << " -> ";
            for (int i = 0; i < j; i++)
            { // menguji apakah pertukaran data sesuai
                cout << x[i] << " ";
            }
            cout << endl;
        }
    }
    cout << endl;
    cout << "Setelah diurutkan : ";
    for (int d = 0; d < j; d++)
    {
        cout << x[d] << " ";
    }
    cout << endl;
        return 0;

    // --------------------------- INI INPUTANNYA CU
    // int main()
    // {
    //     int x[] = {3, 4, 63, 23, 12};
    //     int j = sizeof(x) / sizeof(*x);
    //     int temp;

    //     cout << "x: ";
    //     for (int a = 0; a < j; a++)
    //     {
    //         cout << x[a] << " ";
    //     }

    //     // proses insertion sort
    //     for (int b = 1; b < j; b++)
    //     {
    //         for (int c = b; c > 0; c--)
    //         {
    //             if (x[c] < x[c - 1])
    //             {
    //                 temp = x[c];
    //                 x[c] = x[c - 1];
    //                 x[c - 1] = temp;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //         }
    //     }

    //     cout << endl;
    //     cout << endl;
    //     cout << "y: ";
    //     for (int d = 0; d < j; d++)
    //     {
    //         cout << x[d] << " ";
    //     }
    // }