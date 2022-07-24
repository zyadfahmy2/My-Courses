#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n], b[n], i, sum = 0, x, y;
        cin >> a[0];
        b[0] = a[0];
        for (i = 1; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            sum += (abs(a[i] - a[i - 1]));
        }
        sort(a, a + n);
        if (a[0] == b[0] || a[0] == b[n - 1])
        {
            sum += a[0] - 1;
        }
        else
        {
            x = (a[0] - 1) * 2;
            y = min(b[0], b[n - 1]) - 1;
            ;
            sum += min(x, y);
        }

        if (k <= a[n - 1])
            ;
        else if (a[n - 1] == b[0] || a[n - 1] == b[n - 1])
        {
            sum += (k - a[n - 1]);
        }
        else
        {
            x = 2 * (k - a[n - 1]);
            y = k - max(b[0], b[n - 1]);
            sum += min(x, y);
        }
        cout << sum;
        cout << endl;
    }
}