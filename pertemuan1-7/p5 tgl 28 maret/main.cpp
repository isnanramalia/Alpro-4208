#include <iostream>
using namespace std;

void swapn (int &a, int &b){
    int temp = a; // ini bolak balik untuk swap
    a = b;
    b = temp;
}

int* sortA (int A[], int n){ // * = pointer
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (A[i] > A[j])swapn(A[i], A[j]);
        }
    }
}

int main()
{
    int a=5, b=8;
    cout << a << endl;
    cout << b << endl;

    swapn(a,b);
    cout << "setelah di swap" << endl;
    cout << a << endl;
    cout << b << endl;


    cout << "sebelum swap:\n4, 7, 9, 2" << endl;
    int A[] = {1,6,5,4,9};
    int n = sizeof(A)/sizeof(int);
    cout << "sesudah swap:" << endl;
    int* b = sortA(a, n);
    for (int i=0; i<n; i++)
    cout << b[i];
    return 0;
}
