
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* write the fibonacci function here*/
long long fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}