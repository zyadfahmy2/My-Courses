#include <iostream>
using namespace std;
int main(void)
{
    int n, min, index;
    cin >> n;
    int arr[n];
    bool x = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (x)
        {
            min = arr[i];
            index = i + 1;
            x = false;
            continue;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            index = i + 1;
        }
    }
    cout << min << " " << index << endl;
}