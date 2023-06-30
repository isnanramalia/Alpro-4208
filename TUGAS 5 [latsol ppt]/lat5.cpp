#include <iostream>
#include <string>
using namespace std;

struct Sepeda
{
    string Merk;
    string Type;
    int Tahun;
    string Harga;
};

int main()
{
    // Membuat objek sepeda
    Sepeda sepeda;

    // Pointer ke objek sepeda
    Sepeda *ptrSepeda = &sepeda;

    // Mengakses dan mengisi nilai member menggunakan pointer
    ptrSepeda->Merk = "Polygon";
    ptrSepeda->Type = "Sepeda Gunung";
    ptrSepeda->Tahun = 2013;
    ptrSepeda->Harga = "2.000.000";

    // Mengakses dan menampilkan nilai member menggunakan pointer
    cout << "Merk: " << ptrSepeda->Merk << endl;
    cout << "Type: " << ptrSepeda->Type << endl;
    cout << "Tahun: " << ptrSepeda->Tahun << endl;
    cout << "Harga: " << ptrSepeda->Harga << endl;

    return 0;
}
