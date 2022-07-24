#include <iostream>
using namespace std;
int main(void)
{
    int t, n;
    cin >> t;
    int c = 0;
    while (c < t)
    {
        c++;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = n;
        int len = 1;

        // Traverse through the array
        for (int i = 0; i < n - 1; ++i)
        {
            // If arr[i+1] is greater than arr[i],
            // then increment length
            if (arr[i + 1] > arr[i])
                len++;

            // Else Update count and reset length
            else
            {
                count += (((len - 1) * len) / 2);
                len = 1;
            }
        }

        // If last length is more than 1
        if (len > 1)
            count += (((len - 1) * len) / 2);
        cout << count << endl;
    }
}