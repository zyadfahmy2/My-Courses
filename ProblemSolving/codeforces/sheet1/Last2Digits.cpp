#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>
//printing the last 2 digits
int main(void)
{
    long long a, b, c, d, m;

    cin >> a >> b >> c >> d;
    m = a%100 * b%100 * c%100 * d%100;
    int r = m;
    // checking if the second digit is zero in order to print it out like 04
    if(m/10 == 0)
    {
        cout << 0;
    }
    
        cout << m << "\n";
    

    

}
