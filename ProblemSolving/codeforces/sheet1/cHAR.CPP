#include <iostream>
using namespace std;

//converting capital to small and small to capital
int main(void)
{
    char c;
    cin >> c;
    if (c >= 65 && c <= 96)
    {
       
        c+=32;
        cout << c << "\n";
    }
    else
    {
        c -= 32;
        cout << c << "\n";
    }

}