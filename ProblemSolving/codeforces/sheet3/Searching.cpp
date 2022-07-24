#include <iostream>
using namespace std;
int main(void)
{
    int n;
    long long x;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}