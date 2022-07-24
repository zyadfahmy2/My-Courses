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
        if (arr[i] > 0)
            arr[i] = 1;
        if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        cout << arr[i] << " ";
    }
}