#include <iostream>
using namespace std;

enum Gear
{
    Parkir,
    Mundur,
    Netral,
    Satu,
    Dua,
    Tiga,
    Empat,
    Lima
};

int main()
{
    Gear gearMobil = Netral;

    switch (gearMobil)
    {
    case Parkir:
        cout << "Mobil dalam posisi parkir" << endl;
        break;
    case Mundur:
        cout << "Mobil dalam posisi mundur" << endl;
        break;
    case Netral:
        cout << "Mobil dalam posisi netral" << endl;
        break;
    case Satu:
        cout << "Mobil dalam gigi satu" << endl;
        break;
    case Dua:
        cout << "Mobil dalam gigi dua" << endl;
        break;
    case Tiga:
        cout << "Mobil dalam gigi tiga" << endl;
        break;
    case Empat:
        cout << "Mobil dalam gigi empat" << endl;
        break;
    case Lima:
        cout << "Mobil dalam gigi lima" << endl;
        break;
    default:
        cout << "Posisi gigi tidak diketahui" << endl;
        break;
    }

    return 0;
}
