#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>
//checking wether the entered number is a float or an integer
int main(void)
{
    long long l1, r1, l2, r2;
    cin >>l1 >> r1 >> l2 >> r2;
    if (l1 <= l2 && r1 <= r2 && r1 >= l2) 
    {
        if(r1 > l1)
            cout << l2 << " " << r1 ;
        else
            cout << r1 << " " << l2 ;
    }
    else if ( l2 > r1 || l1 > r2)
        cout <<-1;
    else if (l1 >= l2 && r1 >=r2)
    {
        cout << l1 << " " << r2;
    }
    else if ( l1 <= l2 && r1>=r2)
    {
        cout << l2 << " " <<r2;
    }
    else if ( l1>= l2 && r1 <= r2)
    {
        cout << l1 << " " << r1;
    }

    
    
}