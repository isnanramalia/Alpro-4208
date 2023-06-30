#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 4; // Jumlah data

struct Mahasiswa
{
    string NIM;
    string Nama;
    string Jurusan;
    int TahunLulus;
};

int main()
{
    // Array of Structure
    Mahasiswa mahasiswa[MAX_SIZE] = {
        {"A11.2020.01234", "Andi", "Broadcasting", 2023},
        {"A11.2010.01234", "Budi", "Sistem Informasi", 2013},
        {"A11.2000.01234", "Ali", "DKV", 2003},
        {"A11.1990.01234", "Siti", "Kesehatan", 1993}};

    // Cetak data
    for (int i = 0; i < MAX_SIZE; i++)
    {
        cout << "NIM: " << mahasiswa[i].NIM << endl;
        cout << "Nama: " << mahasiswa[i].Nama << endl;
        cout << "Jurusan: " << mahasiswa[i].Jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].TahunLulus << endl;
        cout << endl;
    }

    return 0;
}

/*
Pada versi array statis, array of structure "mahasiswa" dideklarasikan dengan ukuran maksimum yang sudah ditentukan sebelumnya (MAX_SIZE). Kemudian, data-data mahasiswa diinisialisasi secara langsung dalam array.*/