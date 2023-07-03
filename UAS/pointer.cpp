#include <iostream>

int main()
{
    // Menggunakan pointer untuk mengalokasikan memori
    int *pointer = new int; // Mengalokasikan memori untuk sebuah integer
    *pointer = 42;          // Menyimpan nilai 42 ke alamat yang ditunjuk oleh pointer
    std::cout << "Nilai yang ditunjuk oleh pointer: " << *pointer << std::endl;

    // Menggunakan pointer untuk mengalokasikan memori sejumlah elemen
    int size = 5;
    int *array = new int[size]; // Mengalokasikan memori untuk array dengan 5 elemen
    for (int i = 0; i < size; ++i)
    {
        array[i] = i * 10; // Menyimpan nilai i*10 ke elemen ke-i dari array
    }

    std::cout << "Elemen-elemen array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Menggunakan delete untuk membebaskan memori yang dialokasikan
    delete pointer;
    delete[] array;

    return 0;
}
