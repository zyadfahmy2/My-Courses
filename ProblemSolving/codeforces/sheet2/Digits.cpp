// printing the digits of a number in reverse
#include <iostream>
using namespace std;
int main(void)
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            cout << x << " "
                 << "\n";
            continue;
        }
        while (x != 0)
        {
            cout << x % 10 << " ";
            x /= 10;
        }
        cout << "\n";
    }
}