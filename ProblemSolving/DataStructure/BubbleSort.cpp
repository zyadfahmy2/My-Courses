#include <iostream>
using namespace std;
void bubbleSort(int arr[], int l);
int main(void)
{
    int arr[7] = {1, 0, 3, 6, 8, 1, 12};
    bubbleSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int l)
{

    for (int i = 0; i < l - 1; i++)
    {

        bool swapped = false;
        for (int j = 0; j < l - 1 - i; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if ((!swapped))
        {

            return;
        }
    }
}