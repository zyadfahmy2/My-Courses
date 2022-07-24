#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int count = 0;
    // sort(arr, arr + n);
    // int j = 1;
    // bool flag = false;
    // int i;
    // for (i = 0; i < n; i++)
    // {
    //     if (j > m)
    //     {
    //         break;
    //     }
    //     if (arr[i] == j)
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         cout << count << "\n";

    //         j++;
    //         if (arr[i] == j)
    //         {
    //             count = 1;
    //         }
    //         else
    //         {
    //             count = 0;
    //         }
    //     }
    // }
    // if (i == n && arr[i - 1] == j)
    //     cout << count << "\n";
    unordered_map<int, int> freqMap;
    for (int i = 0; i < n; i++)
    {
        freqMap[arr[i]]++;
    }
    for (auto x : freqMap)
    {
        cout << x.first << endl;
    }
    // for (auto it = freqMap.begin(); it != freqMap.end(); ++it)
    // {
    //     cout << it->first;
    // }
    for (int i = 1; i <= m; i++)
    {
        cout << freqMap[i] << endl;
    }
}
