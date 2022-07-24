#include <iostream>
using namespace std;
#define MAX 15
class BinaryHeap
{
public:
    BinaryHeap()
    {
        size = 0;
    }
    // returning parent node
    static int Parent(int i)
    {
        return (i - 1) / 2;
    }
    // returning left child
    static int childl(int i)
    {
        return (2 * i + 1);
    }
    // returning right child
    static int childr(int i)
    {
        return (2 * i + 2);
    }
    void insert(int data)
    {
        if (size >= MAX)
        {
            cout << " the heap is full";
            return;
        }
        arr[size++] = data;
        int i = size - 1;
        while (arr[i] > arr[Parent(i)])
        {
            swap(arr[i], arr[Parent(i)]);
            i = Parent(i); // not i --
        }
    }
    int getsize()
    {
        return size;
    };
    // removing root from the heap array
    // this is like heap sort as every time you return the maximum
    int MaxRemove()
    {
        int Max = arr[0];
        arr[0] = arr[size - 1];
        size--;
        MaxHeapify(0);
        return Max;
    }
    void MaxHeapify(int i)
    {
        int largest = i;
        if (childl(i) < size && arr[childl(i) > arr[largest]])
            largest = childl(i);
        if (childr(i) < size && arr[childr(i) > arr[largest]])
            largest = childr(i);
        if (i != largest)
        {
            swap(arr[largest], arr[i]);
            MaxHeapify(largest);
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

private:
    int size;
    int arr[MAX];
};
// check wether the given array is heap or not
bool isHeap(int HeapArr[], int ln)
{
    // looping through the array
    for (int i = 0; i < ln; i++)
    {
        if (2 * i + 1 < ln)
        {
            // checking if left child is bigger than the parent
            if (HeapArr[2 * i + 1] > HeapArr[i])
            {
                return false;
            }
        }
        if (2 * i + 2 < ln)
        {
            // checking if right child is bigger than the parent
            if (HeapArr[2 * i + 2] > HeapArr[i])
            {
                return false;
            }
        }
    }
    return true;
}
// return max value of a heap
int maxValue(int HeapArr[])
{
    return HeapArr[0];
}
int MinValue(int HeapArr[], int ln)
{
    bool flag = true;
    // could have made min as the root because it is the largest value so no need to use a flag
    int min;
    // leaf nodes starts from length over 2 of the heap array
    for (int i = ln / 2; i < ln; i++)
    {
        if (flag)
        {
            min = HeapArr[i];
            flag = false;
            continue;
        }
        if (min > HeapArr[i])
            min = HeapArr[i];
    }
    return min;
}
int main(void)
{
    BinaryHeap heap;
    int arr[] = {10, 15, 8, 20, 14, 17, 12, 9, 13};
    int arr2[] = {100, 64, 30, 10, 3, 15, 14};
    // cout << heap.Parent(2);
    // cout << heap.childl(0);
    // cout << isHeap(arr, sizeof(arr) / sizeof(*arr));
    // cout << isHeap(arr2, sizeof(arr) / sizeof(*arr));
    // cout << MinValue(arr2, sizeof(arr2) / sizeof(*arr2));
    heap.insert(10);
    heap.insert(15);
    heap.insert(8);
    heap.insert(20);
    heap.print();
}