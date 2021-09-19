#include <iostream>
using namespace std;
// finding the min and max between two numbers
int main(void)
{
    int a, b, c;
    int max, min;
    cin >> a >> b >> c ;
    if (a >= b && a>= c)
    max = a;
    else if (b >= a && b >= c)
    max = b;
    else
    max = c;

    if (a <= b && a <= c)
    min = a;
    else if (b <= a && b <= c)
    min = b;
    else
    min = c;

    cout << min << " " <<max <<"\n" ;

    

}