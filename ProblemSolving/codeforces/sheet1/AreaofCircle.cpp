#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double pi = 3.141592653;
    double r;
    
    cin>>r;
    double x = pi*r*r;
    
    cout << fixed<<setprecision(9) << x;
}