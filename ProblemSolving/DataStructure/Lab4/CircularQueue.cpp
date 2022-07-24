#include <iostream>
using namespace std;
#define MAX 5
class circuilar_Queue
{
private:
    int items[MAX], front, rear;

public:
    circuilar_Queue()
    {
        front = -1;
        rear = -1;
    }

public:
    bool isEmpty()
    {
        return (front == -1);
    }
    bool isFull()
    {
        return ((front == 0 && rear == MAX - 1) || (front == (rear + 1)));
    }
    void enQueue(int element)
    {
        if (isFull())
        {
            cout << "The queue is Full\n";
            return;
        }
        else
        {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % MAX;
            items[rear] = element;
        }
    }
    int deQueue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        int element = items[front];
        if (front == rear)
            front = rear = -1;
        else
        {
            front = (front + 1) % MAX;
        }
        return element;
    }
    void display()
    {
        if (isEmpty())
            cout << "Queue is Empty"
                 << "\n";
        else
        {
            cout << "Front index -->" << front << endl;
            for (int i = front; i != rear; i = (i + 1) % MAX)
            {
                cout << items[i] << " ";
            }
            cout << items[rear];
            cout << "\n"
                 << "Rear index -- >" << rear << endl;
        }
    }
};

int main(void)
{
    circuilar_Queue q;
    // deQueue i s no t p o s s i b l e on empty queue
    q.deQueue();
    // enQueue 5 elemen t s
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    // 6 t h elemen t can ’ t be added t o bec a u se t h e queue i s f u l l
    q.enQueue(6);
    q.display();
    // deQueue removes elemen t e n t e r e d f i r s t i . e . 1
    q.deQueue();
    // Now we have j u s t 4 elemen t s
    q.enQueue(3);
    q.display();
    return 0;
}