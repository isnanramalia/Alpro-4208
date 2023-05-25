#include <iostream>
using namespace std;

int kali(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + kali(a, b - 1);
    }
}

int main()
{
    int a = 5;
    int b = 3;
    int result = kali(a, b);
    cout << "Result: " << result << endl;

    return 0;
}
