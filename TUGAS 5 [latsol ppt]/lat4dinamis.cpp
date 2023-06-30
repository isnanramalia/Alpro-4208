#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string NIM;
    string Nama;
    string Jurusan;
    int TahunLulus;
};

int main()
{
    // Input jumlah data
    int jumlahData;
    cout << "Masukkan jumlah data: ";
    cin >> jumlahData;

    // Alloki array of structure secara dinamis
    Mahasiswa *mahasiswa = new Mahasiswa[jumlahData];

    // Input data
    for (int i = 0; i < jumlahData; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << endl;
        cout << "NIM: ";
        cin >> mahasiswa[i].NIM;
        cout << "Nama: ";
        cin >> mahasiswa[i].Nama;
        cout << "Jurusan: ";
        cin >> mahasiswa[i].Jurusan;
        cout << "Tahun Lulus: ";
        cin >> mahasiswa[i].TahunLulus;
        cout << endl;
    }

    // Cetak data
    for (int i = 0; i < jumlahData; i++)
    {
        cout << "NIM: " << mahasiswa[i].NIM << endl;
        cout << "Nama: " << mahasiswa[i].Nama << endl;
        cout << "Jurusan: " << mahasiswa[i].Jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].TahunLulus << endl;
        cout << endl;
    }

    // Hapus alokasi memori
    delete[] mahasiswa;

    return 0;
}

/* ANALISIS
Pada versi array dinamis, input jumlah data diminta dari pengguna. Kemudian, dilakukan alokasi memori dinamis menggunakan operator new untuk menentukan ukuran array sesuai jumlah data yang dimasukkan. Setelah itu, pengguna diminta untuk memasukkan data mahasiswa satu per satu. Kemudian, data mahasiswa dicetak.
*/