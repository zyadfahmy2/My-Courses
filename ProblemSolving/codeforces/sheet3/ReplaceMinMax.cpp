#include <iostream>
using namespace std;
int main()
{
    short minindex = 0, maxindex = 0;
    int n, maxx = 0, minn = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maxx = arr[0];
    minn = arr[0];

    for (int j = 1; j < n; j++)
    {
        if (maxx <= arr[j])
        {
            maxx = arr[j];
            maxindex = j;
        }
        if (minn >= arr[j])
        {
            minn = arr[j];
            minindex = j;
        }
    }

    int tmp = arr[maxindex];
    arr[maxindex] = arr[minindex];
    arr[minindex] = tmp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}