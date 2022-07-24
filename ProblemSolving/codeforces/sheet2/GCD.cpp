#include <iostream>
using namespace std;

int main(void)
{
    int a, b, x;
    cin >> a >> b;
    if (a >= b)
    {
        x = a;
    }
    else
        x = b;
    for (int i = x; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i;
            return 0;
        }
    }
}