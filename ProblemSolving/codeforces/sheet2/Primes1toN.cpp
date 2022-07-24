#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool x = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                x = false;
        }
        if (x == true)
        {
            cout << i << " ";
        }
    }
}