
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* write the fibonacci function here*/
long long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    long long x = 0, y = 1;
    long long z;
    z = x + y;

    for (int i = 2; i <= n; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return z;
}

int main(void)
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}