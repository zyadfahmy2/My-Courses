#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int start, int end);
int main(void)
{
    int arr[] = {7, 8};
    cout << binary_search(arr, 7, 0, 1);
    return 0;
}

int binary_search(int arr[], int n, int start, int end)
{
    // int start = 0;
    // int end = length - 1;

    // int mid;
    // while (end >= start)
    // {
    //     mid = (start + end) / 2;
    //     if (arr[mid] == n)
    //         return mid;
    //     else if (arr[mid] < n)
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //         end = mid - 1;
    // }
    if (start > end) // if array was 7,8 and we are looking for 1  the end will be -1 which is out of inde
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == n)
    {
        return mid;
    }
    if (start == end)
    {
        return -1;
    }

    else if (arr[mid] < n)
    {
        start = mid + 1;
    }
    else
        end = mid - 1;
    binary_search(arr, n, start, end);
}