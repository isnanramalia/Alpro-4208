#include <iostream>
using namespace std;
// pemanggilan fungsi dilakukan di deklarasi

void insertionSort(int arr[], int n)
{
    int i, key, j;
    // i -> indexs untuk mengakses setiap elemen dalam array
    // key -> untuk menyimpan nilai elemen yg sedang dibandingkan
    // j -> untuk memindahkan elemen2 yg lebih besar dari key ke posisi setelahnya
    for (i = 1; i < n; i++)
    {
        key = arr[i]; // utk menyimpan elemen pd posisi i, elemen ini akan dibandingkan dgn setiap elemen sebelumnya utk menentukan posisisnya dlm array
        j = i - 1;    // sbg penanda posisi index terkhair dr array yg sudah diurutkan

        /* Pindahkan elemen-elemen yang lebih besar dari key ke posisi setelahnya */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Array yang telah diurutkan: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
