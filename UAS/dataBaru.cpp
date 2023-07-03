#include <iostream>
using namespace std;

// Mendefinisikan tipe data baru
struct Mahasiswa
{
    string nama;
    int usia;
    string jurusan;
};

int main()
{
    // Membuat variabel bertipe data Mahasiswa
    Mahasiswa mhs1;

    // Mengisi nilai pada variabel mhs1
    mhs1.nama = "John Doe";
    mhs1.usia = 20;
    mhs1.jurusan = "Informatika";

    // Menampilkan informasi mahasiswa
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Usia: " << mhs1.usia << endl;
    cout << "Jurusan: " << mhs1.jurusan << endl;

    return 0;
}
