#include <iostream>
using namespace std;
class node
{
private:
    int data;
    node *next;

public:
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int i)
    {
        data = i;
        next = NULL;
    }

    int getdata()
    {
        return this->data;
    }
    node *getNext()
    {
        return next;
    }

    friend class list;
};

class list
{
private:
    node *chain;

public:
    list(int i)
    {
        chain = new node(i);
    }
    ~list()
    {
        node *temp = chain;
        while (temp != NULL)
        {
            node *p = temp->next;
            delete temp;
            temp = p;
        }
    }
    void add(int item)
    {
        node *temp = new node(item);
        temp->next = chain;
        chain = temp;
    }
    void addEnd(int item)
    {
        if (chain == NULL)
        {
            chain = new node(item);
            return;
        }
        node *temp;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new node(item);
    }
    void remove(int item)
    {

        if (chain->data == item)
        {
            node *temp = chain;
            chain = chain->next;
            delete temp;
            return;
        }
        node *temp = chain;
        while (temp->next->data != item)
        {
            temp = temp->next;
        }
        // didn't do this
        if (temp == NULL)
        {
            return;
        }
        node *p = temp->next;
        temp->next = p->next;
        delete p;

        // if (chain == NULL)
        //     return;
        // if (chain->data == item) //special case removing 1st node
        // {
        //     node *temp = chain;
        //     chain = chain->next;
        //     delete temp;
        // }
        // else
        // {
        //     node *p = chain;
        //     if (p->next == NULL)
        //         return;                   //value not found
        //     while (p->next->data != item) //stop at the node before
        //     {
        //         p = p->next;
        //         if (p->next == NULL)
        //             return;
        //     }                   //value not found
        //     node *p2 = p->next; //normal remove as in figure
        //     p->next = p2->next;
        //     delete p2;
        // }
    }
    void printall()
    {
        node *temp = chain;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
    }
};

int main(void)
{
    list l1(5);
    l1.add(10);
    l1.add(9);
    l1.add(8);
    l1.remove(9);
    l1.printall();
}