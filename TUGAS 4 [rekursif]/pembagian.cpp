#include <iostream>
using namespace std;

int bagi(int a, int b)
{
    if (a < b)
    {
        return 0;
    }
    else
    {
        return 1 + bagi(a - b, b);
    }
}

int main()
{
    int a = 10;
    int b = 2;
    int result = bagi(a, b);
    cout << "Result: " << result << endl;

    return 0;
}
