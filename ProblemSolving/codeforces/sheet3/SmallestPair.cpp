#include <iostream>
using namespace std;
int main(void)
{
    short n;
    cin >> n;
    int arr[n], min;
    bool x = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (x)
        {
            x = false;
            min = arr[i];
            continue;
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
        cout << "Lucky" << endl;
}