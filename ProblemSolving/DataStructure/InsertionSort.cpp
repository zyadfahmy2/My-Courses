#include <iostream>
using namespace std;
void insertion_Sort(int arr[], int n);
int main(void)
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1}; // worst case scenario when the array is reversed or sorted descendingly
    int n = sizeof(arr) / sizeof(*arr);
    insertion_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

void insertion_Sort(int arr[], int n)
{
    // int count = 0;
    for (int i = 0; i < n - 1; i++) // loop on all elements of the array  :O(n)
    {
        int j = i;
        int current = arr[i + 1];
        while (arr[j] > current) // if the array is already sorted then O(1) and if it is sorted descendingly then O(n)
        {
            arr[j + 1] = arr[j];
            //count++;
            j--;
            if (j < 0)
                break;
        }
        arr[j + 1] = current;
    }
}