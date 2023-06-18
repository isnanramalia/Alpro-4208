#include <iostream>
using namespace std;

/* Jadi perbedaan rekursif sm yg biasa (iterasi) apa?
- Rekursif: metode yg prosesnya bakal memecah masalah (case) menjadi lebih kecil
- Iterasi: metode yg prosesnya lgsg dgn looping
*/

int factorial(int n)
{
    // Base case: jika n adalah 0 atau 1, faktorialnya adalah 1
    // base case jg disebut kondisi berhenti
    if (n == 0 || n == 1)
        return 1;

    // Rekursi: mengalikan n dengan faktorial dari n-1
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Masukkan bilangan: ";
    cin >> num;

    int result = factorial(num);
    cout << "Faktorial dari " << num << " adalah " << result << endl;

    return 0;
}
