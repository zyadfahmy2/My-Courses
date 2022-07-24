#include <iostream>
using namespace std;
void quick_sort(int arr[], int l, int r);
int main(void)
{
    int arr[] = {1, 4, 3, 1, 9, 6, 10};

    quick_sort(arr, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}
void quick_sort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int pivot = arr[l], i = l, j = r - 1, temp;
    temp = arr[r];
    arr[r] = arr[l];
    arr[l] = temp;

    while (i <= j)
    {
        while (arr[i] <= pivot && i <= r - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= l)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[r];
    arr[r] = arr[i];
    arr[i] = temp;
    quick_sort(arr, l, i - 1);
    quick_sort(arr, i + 1, r);
}