#include <iostream>
using namespace std;
int main(void)
{
    short t, n;
    cin >> t;

    while (t--) // t >= 0
    {

        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {

            cout << arr[i] << " ";
        }
        for (int i = 0; i < n; i++)
        {
            int mx = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                // 1
                mx = max(mx, arr[j]); // 6
                cout << mx << " ";
            }
        }
        cout << endl;
    }
}