#include <iostream>
#include <bits/stdc++.h>
// PERTEMUAN 6, BOGO SORT

using namespace std;

// to check if array is sorted or not
bool isSorted(int a[], int n){
    while (--n > 1)
        if (a[n]<a[n-1])
            return false;
        return true;
}

// to generate permutation of the array
void shuffle(int a[], int n)
{
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}

// sorts array a[0..n-1] using bogo sort
void bogosort(int a[], int n)
{
    int step = 0;
    // if array is not sorted then shuffle
    // the array again
    while(!isSorted(a, n)) // kalo blm urut, dia akan menjalankan ini
    {
        shuffle(a,n);
        step++;
    }
    cout << "step: " << step << endl;
}

// prints the array
void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

// driver code
int main()
{
    int a[] = {3,2,5,1,0,4};
    int n = sizeof a / sizeof a[0];
    bogosort(a,n);
    cout << "sorted array: \n";
    printArray(a,n);
    return 0;
}
