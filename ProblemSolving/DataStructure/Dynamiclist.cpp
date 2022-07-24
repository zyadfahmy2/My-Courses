#include <iostream>
using namespace std;
class List
{
private:
    int size, capacity; // size is the actual size of the array and capacity is the number of elements
    int *arr;

public:
    List(int s)
    {
        capacity = 0;
        size = s;
        arr = new int[size];
    }
    ~List() { delete[] arr; }
    int get(int index)
    {
        return arr[index];
    }
    int getSize()
    {
        return capacity;
    }
    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    //shifting all the elements to the right in order to insert another element between them
    //if the user enter index = size then it only put the element without shifting
    void insert(int index, int element)
    {

        if (index >= size)
        {
            int *arr1 = new int[size * 2];
            for (int i = 0; i < capacity; i++)
            {
                arr1[i] = arr[i];
            }
            size *= 2;
            delete[] arr;
            arr = arr1;
            //delete[] arr1;
            delete[] arr1;
            cout << " Testinggg";
        }
        for (int i = capacity; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        capacity++;
    }
    void remove(int index)
    {
        for (int i = index; i < capacity - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        capacity--;
    }
    void append(int element)
    {
        insert(capacity, element);
    }
    int search(int element)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == element)
            {
                return i;
            }
        }
        return -1;
    }
};

int main(void)
{
    List list(3);
    list.append(1);
    list.append(2);
    list.append(3.5);
    list.append(4);
    list.append(5);
    list.print();
    cout << "the size is:  " << list.getSize() << "\n";
    list.insert(2, 20);
    list.print();
    cout << "the size is:  " << list.getSize() << "\n";
    list.remove(2);
    list.print();
    cout << "the size is:  " << list.getSize() << "\n";
}
