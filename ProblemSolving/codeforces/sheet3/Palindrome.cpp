#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, j = n - 1; i <= n / 2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}