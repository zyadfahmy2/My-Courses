#include <iostream>
using namespace std;


//calculating years months and days given number
int main(void)
{
    int a, b, c;
    int max = 0 , min = 0;
    int middle=0;
    cin >> a >> b >> c;
    if(a>=b && a >=c )
    {
        max = a;
        middle = b ;
        min = c;
    }
    else if (b>=a && b>=c)
    {
        max = b;
        middle = a ;
        min = c;
    }
    else{
        max = c;
        middle = b ;
        min = a;
    }

    if(middle <min)
    {
        int tmp = middle;
        middle = min;
        min = tmp;
    }
    cout<< min <<"\n" << middle << "\n" << max << "\n\n";
    cout << a << "\n" << b << "\n" << c << "\n";
    
}

