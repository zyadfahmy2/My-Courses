
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'missingNumbers' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER_ARRAY brr
 */

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
int *missingNumbers(int arr_count, int *arr, int brr_count, int *brr, int *result_count)
{
    sort(arr, arr + arr_count);
    sort(brr, brr + brr_count);
    int *result = new int(*result_count);
    int j = 0;
    int r = 0;
    for (int i = 0; i < brr_count; i++)
    {
        if (arr[i] = arr[j])
        {
            j++;
            continue;
        }

        else
        {
            if (result[r] != arr[i])
            {
                result[r++] = arr[i];
            }
        }
    }
    return result;
}
vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    vector<int> result;
    int j = 0;
    int r = 0;
    for (int i = 0; i < brr.size(); i++)
    {
        if (arr[i] = arr[j])
        {
            j++;
            continue;
        }

        else
        {
            if (result[r] != arr[i])
            {
                result.push_back(arr[i]);
            }
        }
    }
    return result;
}

int main(void)
{
    int arr[] = {203, 204, 205, 206, 207, 208, 203, 204, 205, 206};
    int brr[] = {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204};
    int arr_count = sizeof(arr) / sizeof(arr[0]);
    int brr_count = sizeof(brr) / sizeof(brr[0]);
    int *result_count;
    *result_count = 3;
    int *x = missingNumbers(arr_count, arr, brr_count, brr, result_count);
}