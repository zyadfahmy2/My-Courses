#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void greedy(int arr[])
{

    int size = sizeof(arr) / sizeof(*arr);
    cout << size;
    int i = 0;
    while (i < size)
    {
        while (arr[i] > 1)
        {
            arr[i] = arr[i] - 2;
            arr[i + 1] = arr[i + 1] + 1;
            // cout << arr[i];
        }
        i++;
    }
    int j = 0;
    while (j < size)
    {
        // cout << arr[j] << endl;
        j++;
    }
}
int main()
{
    int arr[5] = {6, 0, 0, 0, 0};
    greedy(arr);
    return 0;
}