#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>
//#include <bits/stdc++.h>

int main(void)
{
    long long a, b, c, d;
    
    cin >> a >> b >> c >> d;
    // cout << b*log(a) << " " << d * log(c);
    if( b*log(a) > d * log(c))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

}
