#include <iostream>
using namespace std;
#define MAX_SIZE 1000
class List
{
private:
    int size;
    int arr[MAX_SIZE];

public:
    List()
    {
        size = 0;
    }
    int get(int index)
    {
        return arr[index];
    }
    int getSize()
    {
        return size;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    //shifting all the elements to the right in order to insert another element between them
    //if the user enter index = size then it only put the element without shifting
    void insert(int index, int element)
    {
        for (int i = size; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        size++;
    }
    void remove(int index)
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
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
    List list;
    list.insert(0, 1);
    list.insert(1, 2);
    list.insert(2, 3);
    list.insert(3, 4);
    list.insert(4, 5);
    list.print();
    list.insert(2, 10);
    list.print();
    cout << "size is : " << list.getSize() << "\n";
    list.remove(2);
    list.print();
    cout << "size is : " << list.getSize() << "\n";
    cout << list.search(3);
}
