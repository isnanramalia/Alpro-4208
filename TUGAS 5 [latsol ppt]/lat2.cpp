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

    // Mengisi nilai member
    sepeda.Merk = "Polygon";
    sepeda.Type = "Sepeda Gunung";
    sepeda.Tahun = 2013;
    sepeda.Harga = "2.000.000";

    // Menampilkan informasi sepeda
    cout << "Merk: " << sepeda.Merk << endl;
    cout << "Type: " << sepeda.Type << endl;
    cout << "Tahun: " << sepeda.Tahun << endl;
    cout << "Harga: " << sepeda.Harga << endl;

    return 0;
}
