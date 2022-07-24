#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int a[n], b[n];
    bool flag[n] = {false};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
}