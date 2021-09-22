#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>
//comparing between a and b and checking if the user was right 
int main(void)
{
    int a,b;
    char s;
    cin >> a >> s >> b;
    if (s == '>')
    {
        if (a>b)
        {
            cout << "Right";
        }
        else 
            cout << "Wrong";
    }
        if (s == '<')
    {
        if (a<b)
        {
            cout << "Right";
        }
        else 
            cout << "Wrong";
    }
        if (s == '=')
    {
        if (a==b)
        {
            cout << "Right";
        }
        else 
            cout << "Wrong";
    }
}