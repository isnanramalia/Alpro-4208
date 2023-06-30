#include <iostream>
using namespace std;

enum Cuaca
{
    Cerah,
    Berawan,
    Hujan,
    Mendung,
    Badai
};

int main()
{
    Cuaca cuacaHariIni = Berawan;

    switch (cuacaHariIni)
    {
    case Cerah:
        cout << "Cuaca hari ini cerah" << endl;
        break;
    case Berawan:
        cout << "Cuaca hari ini berawan" << endl;
        break;
    case Hujan:
        cout << "Hari ini hujan" << endl;
        break;
    case Mendung:
        cout << "Cuaca hari ini mendung" << endl;
        break;
    case Badai:
        cout << "Hari ini badai" << endl;
        break;
    default:
        cout << "Cuaca tidak diketahui" << endl;
        break;
    }

    return 0;
}
