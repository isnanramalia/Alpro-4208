#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

// Fungsi yang akan diukur efisiensinya
void contohAlgoritma()
{
    // Tambahkan algoritma yang ingin diukur efisiensinya di sini
    for (int i = 0; i < 1000000; i++)
    {
        // Lakukan operasi yang diinginkan
    }
}

int main()
{
    // Ukuran masukan
    int n = 1000000;

    // Mengukur waktu awal
    auto start = high_resolution_clock::now();

    // Menjalankan algoritma
    contohAlgoritma();

    // Mengukur waktu berakhir
    auto end = high_resolution_clock::now();

    // Menghitung durasi eksekusi dalam satuan detik
    duration<double> duration = duration_cast<duration<double>>(end - start);
    double durasi = duration.count();

    cout << "Durasi eksekusi: " << durasi << " detik" << endl;

    return 0;
}
