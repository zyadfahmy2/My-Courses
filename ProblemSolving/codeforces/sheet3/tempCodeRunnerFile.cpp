#include <iostream>
using namespace std;
int main(void)
{
    int t, n, count = 0, Min;
    cin >> t;
    do
    {
        cin >> n;
        if (n == 1)
            continue;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Min = INT32_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {

                if (Min > arr[i] + arr[j] + j - i)
                {
                    Min = arr[i] + arr[j] + j - i;
                }
            }
        }
        count++;
        cout << Min;
    } while (count < t);
}