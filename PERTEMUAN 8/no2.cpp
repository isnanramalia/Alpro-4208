#include <iostream>
using namespace std;

// SOAL 2: 2 sorting berbeda, descending

void bubbleSort(int arrBubble[], int nB)
{
    int i, j;
    for (i = 0; i < nB - 1; i++)
        for (j = 0; j < nB - i - 1; j++)
            if (arrBubble[j] < arrBubble[j + 1])
                swap(arrBubble[j], arrBubble[j + 1]);
}

void insertionSort(int arrInsertion[], int nI)
{
    int i, key, j;
    for (i = 1; i < nI; i++)
    {
        key = arrInsertion[i];
        j = i - 1;

        while (j >= 0 && arrInsertion[j] < key)
        {
            arrInsertion[j + 1] = arrInsertion[j];
            j = j - 1;
        }
        arrInsertion[j + 1] = key;
    }
}

void tampilArrayBubble(int arrBubble[], int nB)
{
    for (int i = 0; i < nB; i++)
    {
        cout << arrBubble[i] << " ";
    }
    cout << endl;
}

void tampilArrayInsertion(int arrInsertion[], int nI)
{
    for (int i = 0; i < nI; i++)
    {
        cout << arrInsertion[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arrBubble[] = {6,4,26,6,7};
    int arrInsertion[] = {5,3,6,8,22};
    int nB = sizeof(arrBubble) / sizeof(arrBubble[0]);
    int nI = sizeof(arrInsertion) / sizeof(arrInsertion[0]);

    cout << "Array bubble sebelum diurutkan: \n";
    tampilArrayBubble(arrBubble,nB);

    bubbleSort(arrBubble, nB);

    cout << "Array bubble setelah diurutkan: \n";
    tampilArrayBubble(arrBubble,nB);

    cout << endl;

    cout << "Array insertion sebelum diurutkan: \n";
    tampilArrayInsertion(arrInsertion,nI);

    insertionSort(arrInsertion, nI);

    cout << "Array insertion setelah diurutkan: \n";
    tampilArrayInsertion(arrInsertion,nI);

    return 0;
}

