#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>
//checking wether the entered number is a float or an integer
int main(void)
{
    float x ;
    cin >> x;
    int y = floor(x);
    if (x > y)
    {
        cout << "float " << y << " " <<x-y;
    }
    else
    {
        cout << "int " << x;
    }
    
}