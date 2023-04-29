#include <iostream>
using namespace std;
//PERTEMUAN KE 3 - materi prosedur

//----------------------------------------PROSEDUR1--------------------------------------------
int jumlah(int a, int b){
    int x;
    x = a + b;

    return x;
}

/*
int jumlah(int a, int b){
    return a + b;
}
*/

//----------------------------------------PROSEDUR2--------------------------------------------
void procJumlah(int a, int b){
    cout << a + b << endl;
}

//----------------------------------------PROSEDUR3--------------------------------------------
void cetakGanjil(int x);


//----------------------------------------PROSEDUR4--------------------------------------------
void foo(){
    static int f = 0;
    f++;
    cout << f << endl;
}


//----------------------------------------FUNGSI1--------------------------------------------
int fungsiGenap(int x);


//----------------------------------------MAIN--------------------------------------------
int main()
{
    // --------------ini untuk yg prosedur 1-------------
    int bil1 = 5;
    int bil2 = 7;
    cout << jumlah(bil1, bil2); //atau langsung --> cout << jumlah(4, 8)
    cout << endl;


    // --------------ini untuk yg prosedur 2-------------
    procJumlah(5,10);


    // --------------ini untuk yg prosedur 3-------------
    cetakGanjil(10); //untuk memanggil
    cetakGanjil(11);

    // --------------ini untuk yg prosedur 4-------------
    foo();
    foo();
    foo();

    // --------------ini untuk yg fungsi1-------------
    /* fungsiGenap(1);
    fungsiGenap(2); */

    return 0;
}


// prosedur 3 = memisahkan
void cetakGanjil(int x){
    if(x % 2 == 1){
        cout << "ganjil" << endl;
    } else {
        cout << "tidak ganjil" << endl;
    }
}

// fungsi1
    /* bool fungsiGenap(int x){
    return x % 2 == 0;
}
*/
