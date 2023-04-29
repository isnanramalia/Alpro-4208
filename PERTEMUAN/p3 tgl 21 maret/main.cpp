#include <iostream>

using namespace std;

//kenapa deklarasi & definisi dipisah? jika banyak program biar gampang! bisa di pisah file dengan format akhir file .h = deklarasi & .cpp = definisi
//deklarasi maxN
int maxN(int a, int b);

int main()
{
    cout << maxN(2,4);
    return 0;
}

//definisi maxN
int maxN(int a, int b){
    int temp;
    if(a>b){
        temp = a;
    }else{
        temp = b;
    }
    return temp;
}
