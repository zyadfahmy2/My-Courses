#include <iostream>
using namespace std;
void merge(double x1[], double y[], int left1, int mid, int right);
void mergeSort(double arr[], double y[], int l, int r);
int main(void)
{
    double arr[] = {1, 20, 3, 1, 9, 3, 10};

    double arr1[7];
    mergeSort(arr, arr1, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(double x1[], double y[], int left1, int mid, int right)
{
    int i = left1, j = mid + 1;
    for (int z = left1; z <= right; z++)
    {
        y[z] = x1[z];
    }

    for (int k = left1; k <= right; k++)
    {
        if (i > mid)
            x1[k] = y[j++];
        else if (j > right)
            x1[k] = y[i++];
        else if (y[j] < y[i])
            x1[k] = y[j++];
        else
            x1[k] = y[i++];
    }

    // for (int x = left1; x <= right; x++)
    // {
    //     x1[x] = y[x];
    // }
}
void mergeSort(double arr[], double y[], int l, int r)
{
    if (r <= l)
    {
        return;
    }
    int mid = (l + r) / 2;
    //double *z = new double(r + 1);
    mergeSort(arr, y, l, mid);
    mergeSort(arr, y, mid + 1, r);
    merge(arr, y, l, mid, r);
}
