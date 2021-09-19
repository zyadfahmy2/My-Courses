#include <iostream>
using namespace std;
#include <cstring>

//checking wether the first digit is odd or not and the range between 999 and 9999
int main(void)
{
    int a;
    cin>>a;
    if (a == 999)
    {
        a /= 100;
    }
    else
    a /= 1000;

    if(a % 2 == 0)
    cout << "EVEN\n";
    else
    cout << "ODD\n";
    
}