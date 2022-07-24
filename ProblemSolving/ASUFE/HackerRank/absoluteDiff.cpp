#include <bits/stdc++.h>

using namespace std;
int Absolute(int x)
{
    if (x < 0)
        x *= -1;
    return x;
}
int minimumAbsoluteDifference(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int min = pow(10, 9);
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int x = arr[i] - arr[i + 1];
        x = Absolute(x);
        if (x < min)
        {
            min = x;
        }
    }
}
