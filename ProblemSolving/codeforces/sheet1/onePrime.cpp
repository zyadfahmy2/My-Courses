#include <iostream>
using namespace std;

//calculating factorial number based on the input of the user

int main(void)
{
    int x ;
    cin >> x;

    for (int i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    
}
