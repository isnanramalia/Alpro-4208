#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)         // mencari index yg akan di compare(1) -> i<n-1 bcz elemen terakhir gausa di compare lg, krn udh terbesar/udh urut
        for (j = 0; j < n - i - 1; j++) // mencari index lain utk di compare dgn i
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, n);

    cout << "Array setelah diurutkan: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
