#include <iostream>
using namespace std;
void quick_sort(int arr[], int l, int r);
int main(void)
{
    int arr[] = {1, 4, 3, 1, 9};

    quick_sort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
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
    int temp;
    int pivot = arr[l];
    int i = l + 1;
    int j = r;
    while (i <= j)
    {
        while (arr[i] <= pivot && i <= r)
        {
            i++;
        }
        while (arr[j] > pivot && j >= l + 1)
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
    temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    quick_sort(arr, l, j - 1);
    quick_sort(arr, j + 1, r);
}