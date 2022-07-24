#include <iostream>
using namespace std;
void mergeSort();
void merge(int arr[], int s, int m, int e) int main(void)
{
    int arr[] = {1, 10, 6, 0, 2, 11};
    mergeSort(arr, 0, sizeof(arr) / sizeof(*arr) - 1);
}
void merge(int arr[], int s, int m, int e)
{
    int *arr1 = new int[];
}
void mergeSort(int arr[], int s, int e)
{
    if (e > s)
    {
        int mid = s + e;
        mergeSort(arr, s, mid); // which array to return
        mergeSort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}