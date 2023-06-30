#include <iostream>
using namespace std;

enum Nilai
{
    A,
    B,
    C,
    D,
    E
};

int main()
{
    Nilai nilaiMahasiswa = B;

    switch (nilaiMahasiswa)
    {
    case A:
        cout << "Nilai mahasiswa: A" << endl;
        break;
    case B:
        cout << "Nilai mahasiswa: B" << endl;
        break;
    case C:
        cout << "Nilai mahasiswa: C" << endl;
        break;
    case D:
        cout << "Nilai mahasiswa: D" << endl;
        break;
    case E:
        cout << "Nilai mahasiswa: E" << endl;
        break;
    default:
        cout << "Nilai tidak diketahui" << endl;
        break;
    }

    return 0;
}
