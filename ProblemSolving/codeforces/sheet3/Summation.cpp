#include <iostream>
using namespace std;
int main(void)
{
    int n;
    long long sum = 0;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < 0)
    {
        cout << sum * -1;
    }
    else
    {
        cout << sum;
    }
}
