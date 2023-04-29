#include <iostream>

using namespace std;

int maxArray(int a[]);

int main()
{
    int a[] = {3,2,1,4,6};
    cout << maxArray(a);
    return 0;
}

int maxArray(int a[]){
    int temp=0;
    int len=sizeof(a)/sizeof(a[0]);

    for (int i = 0; i < len; i++){
        if (a[i] > temp) temp = a[i];
    }
    return temp;
}



/*---------------------------------------NOTASI ALGORITMA---------------------------------------------
JUDUL FUNGSI: maxArray(A[]: integer) -> integer
<fungsi untuk mencari nilai max pada deret >

KAMUS:
    A[]: integer // deret bilangan yang dicari
    temp: integer // nilai max sementara
    maxN(a,b: integer)-> integer
        //fungsi yang kita butuhkan
        //mengembalikan nilai max dari 2 bil

NOTASI ALG:
    temp <- // set nilai temp
    i traversal [0...n] // asumsi A[4]={1,2,3,4}
        temp <- < disini gunakan fungsi maxN untuk membandingkan temp lama dengan A[i]>
    end traversal

    return <nilai apa yang di return?>

*notes: implementasikan pemanggilan di int main(), termasuk deklarasi array yang akan diuji
*/


