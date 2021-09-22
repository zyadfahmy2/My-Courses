#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>
//checking if the user enter a right equation or not and if it is not right then print the right answer
int main(void)
{
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+')
    {
        if (a + b == c)
        {
            cout << "Yes";

        }
        else 
            cout << a+b;
    }
    if (s == '-')
    {
        if (a - b == c)
        {
            cout << "Yes";
        }
        else 
            cout << a - b;
    }
    if (s == '*')
    {
        if (a * b == c)
        {
            cout << "Yes";
        }
        else 
            cout << a * b;
    }
    if (s == '/')
    {
        if (a / b == c)
        {
            cout << "Yes";
        }
        else 
            cout << a / b;
    }
}
