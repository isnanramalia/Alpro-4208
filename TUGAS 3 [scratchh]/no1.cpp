#include <iostream>
using namespace std;

// SOAL 1: buat prosedur untuk mencari nilai genap terkecil dalam array, dan fungsi untuk menguji apakah nilai yg sudah ditemukan ganjil atau bukan

bool isOdd(int a)
{
    if (a % 2 == 1)
        return true;
    else
        return false;
}

void minEven(int arr[], int n)
{
    int min = -1;
    int indexMin = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (min == -1 || arr[i] < min)
            {
                min = arr[i];
                indexMin = i;
            }
        }
    }

    if (min == -1)
    {
        cout << "Tidak ada nilai genap dalam array." << endl;
    }
    else
    {
        cout << "Nilai genap terkecil: " << min << ", pada indeks ke-" << indexMin << endl;
        if (isOdd(min))
        {
            cout << min << " adalah bilangan ganjil." << endl;
        }
        else
        {
            cout << min << " bukan bilangan ganjil." << endl;
        }
    }
}

int main()
{
    int arr[] = {2, 3, 7, 8, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    minEven(arr, n);

    return 0;
}
