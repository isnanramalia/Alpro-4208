#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return tambah(a + 1, b - 1);
    }
}

int main()
{
    int a = 3;
    int b = 4;
    int result = tambah(a, b);
    cout << "Result: " << result << endl;

    return 0;
}
