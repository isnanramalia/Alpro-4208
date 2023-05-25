#include <iostream>
using namespace std;

int pangkat(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * pangkat(a, b - 1);
    }
}

int main()
{
    int a = 2;
    int b = 5;
    int result = pangkat(a, b);
    cout << "Result: " << result << endl;

    return 0;
}
