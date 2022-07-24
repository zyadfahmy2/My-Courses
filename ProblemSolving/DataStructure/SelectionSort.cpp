#include <iostream>
using namespace std;
void selection_sort(int arr[], int size);
int main(void)
{
    int arr[] = {1, 4, 3, 1, 9, 6, 10};

    selection_sort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}

void selection_sort(int arr[], int size)
{

    int index;

    for (int k = 0; k < size - 1; k++) // size -1 3lshan kda kda a5r element hyb2a akbr wa7ed
    {
        int min = INT32_MAX; // lazem tet7at hena 3lshan terastar kol mra
        for (int i = k; i < size; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
                index = i;
            }
        }
        int temp = arr[k];
        arr[k] = arr[index];
        arr[index] = temp;
    }
}