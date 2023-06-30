#include <iostream>
#include <vector>
using namespace std;

// Fungsi pencarian linier dengan time complexity O(n) dan space complexity O(1)
int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// Fungsi pencarian biner (binary search) dengan time complexity O(log n) dan space complexity O(1)
int binarySearch(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> numbers = {1, 3, 5, 7, 9};

    int target;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> target;

    // Pencarian linier
    int linearIndex = linearSearch(numbers, target);
    if (linearIndex != -1)
    {
        cout << "Angka ditemukan pada indeks " << linearIndex << " (linear search)" << endl;
    }
    else
    {
        cout << "Angka tidak ditemukan (linear search)" << endl;
    }

    // Pencarian biner
    int binaryIndex = binarySearch(numbers, target);
    if (binaryIndex != -1)
    {
        cout << "Angka ditemukan pada indeks " << binaryIndex << " (binary search)" << endl;
    }
    else
    {
        cout << "Angka tidak ditemukan (binary search)" << endl;
    }

    return 0;
}
