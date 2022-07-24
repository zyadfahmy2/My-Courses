#include <iostream>
using namespace std;
int main(void)
{
    int count = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i;
    while (true)
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                arr[i] /= 2;
            else
                break;
        }
        if (i == n)
            count++;
        else
            break;
    }
    cout << count;
}