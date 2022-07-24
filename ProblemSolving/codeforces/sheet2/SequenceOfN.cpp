#include <iostream>
using namespace std;
int main()
{
    int n = 1, m = 1, sum = 0;
    cin >> n >> m;
    while (n > 0 && m > 0)
    {

        if (n <= 0 && m <= 0)
            return 0;
        if (n <= m)
        {
            for (int i = n; i <= m; i++)
            {
                cout << i << " ";
                sum += i;
            }
        }
        else
        {
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
                sum += i;
            }
        }
        cout << "sum =" << sum << "\n";
        sum = 0;
        cin >> n >> m;
    }
    return 0;
}