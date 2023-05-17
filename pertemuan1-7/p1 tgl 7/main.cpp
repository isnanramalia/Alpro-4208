#include <iostream>

using namespace std;

void hitungLuas(int x, int y){
        cout << x*y;
}

//void = prosedur
void hitungLuasKubus(float p, float l){
        cout << 6*p*l;
}

//langsung float = fungsi
float hitungLuasKubus2(float p, float l){
        return 6*p*l;
}

int main()
{
    // ---------------------------------LESSON 1-------------------------------------
        int a = 5, b=7;
        hitungLuas(a,b);


    // ---------------------------------LESSON 2-------------------------------------
    //cara1
    float panjang = 1, lebar = 1;
    hitungLuasKubus(panjang, lebar);

    //cara2
    cout << "\n" << hitungLuasKubus2(2.4 , 4.1);

 return 0;
}
