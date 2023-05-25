#include <iostream>
using namespace std;

int kurang(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return kurang(a - 1, b - 1);
    }
}

int main()
{
    int a = 7;
    int b = 3;
    int result = kurang(a, b);
    cout << "Result: " << result << endl;

    return 0;
}
