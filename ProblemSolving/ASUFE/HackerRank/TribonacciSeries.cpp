#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long t(int n)
{
    if (n < 2)
    {
        return n;
    }
    if (n == 2)
    {
        return 1;
    }
    return t(n - 1) + t(n - 2) + t(n - 3);
}

int main()
{
    int n;
    cin >> n;
    cout << t(n);
    return 0;
}