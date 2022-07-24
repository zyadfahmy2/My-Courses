#include <iostream>
using namespace std;
int main()
{
    int n, x, y, sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        int maxx = max(x, y);
        int minn = min(x, y);
        for (int i = minn + 1; i < maxx; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << '\n';
        sum = 0;
    }
}