#include <iostream>
using namespace std;

// Fungsi swap untuk menukar nilai dua elemen
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Algoritma pengurutan gelembung (Bubble Sort) secara rekursif
void bubbleSort(int arr[], int n)
{
    // Basis dari rekursi
    if (n == 1)
        return;

    // Mengulang melewati larik, menukar elemen yang tidak berurutan
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
        }
    }

    // Memanggil rekursi untuk elemen yang tersisa
    bubbleSort(arr, n - 1);
}

// Algoritma pengurutan penyisipan (Insertion Sort) secara rekursif
void insertionSort(int arr[], int n)
{
    // Basis dari rekursi
    if (n <= 1)
        return;

    // Memanggil rekursi untuk elemen yang tersisa
    insertionSort(arr, n - 1);

    // Menempatkan elemen terakhir pada posisi yang tepat dalam sublarik yang diurutkan
    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

// Fungsi penggabungan untuk pengurutan penggabungan (Merge Sort)
void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Membuat larik sementara
    int L[n1], R[n2];

    // Mengisi larik sementara dengan data dari larik asli
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Menggabungkan larik sementara ke dalam larik asli
    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Menyalin elemen yang tersisa dari L[] jika ada
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Menyalin elemen yang tersisa dari R[] jika ada
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Algoritma pengurutan penggabungan (Merge Sort) secara rekursif
void mergeSort(int arr[], int left, int right)
{
    // Basis dari rekursi
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    // Memanggil rekursi untuk dua sublarik
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Menggabungkan dua sublarik yang telah diurutkan
    merge(arr, left, mid, right);
}

// Fungsi untuk mencetak larik
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Fungsi utama
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Larik sebelum pengurutan: ";
    printArray(arr, n);

    cout << "Pengurutan menggunakan Bubble Sort: ";
    bubbleSort(arr, n);
    printArray(arr, n);

    cout << "Pengurutan menggunakan Insertion Sort: ";
    insertionSort(arr, n);
    printArray(arr, n);

    cout << "Pengurutan menggunakan Merge Sort: ";
    mergeSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}
