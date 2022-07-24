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
    node(int n)
    {

        data = n;
        next = NULL;
    }

    friend class list;
};
class list
{
private:
    node *chain;
    void printrecursivelast(node *n) // ask
    {
        node *temp = n;
        if (temp == NULL)
        {
            return;
        }
        printrecursive(temp->next);
        cout << temp->data;
    }
    void printrecursive(node *n)
    {
        node *temp = n;
        if (temp == NULL)
        {
            cout << endl;
            return;
        }

        cout << temp->data << " ";
        printrecursive(temp->next);
        cout << endl;
    }

public:
    list()
    {
        chain = new node();
    }
    list(int n)
    {
        chain = new node(n);
    }
    ~list()
    {

        while (chain != NULL)
        {
            node *temp = chain;
            chain = chain->next;
            delete temp;
        }
    }
    void addlast(int item)
    {

        if (chain->next = NULL)
        {
            chain->next = new node(item);
            return;
        }
        node *temp = chain;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new node(item);
    }
    void addfirst(int item)
    {
        node *temp = new node(item);
        temp->next = chain;
        chain = temp;
    }

    void remove(int item)
    {
        if (chain->data == item)
        {
            node *p = chain;
            chain = chain->next;
            delete p;
            return;
        }
        node *temp = chain;
        while (temp->next->data != item)
        {
            temp = temp->next;
        }
        node *p = temp->next;
        temp->next = p->next;
        delete p;
    }
    void printall()
    {
        node *temp = chain;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printr()
    {
        printrecursive(chain);
    }
    void printrlast()
    {
        printrecursivelast(chain);
    }
    void deletelist()
    {
        while (chain != NULL)
        {
            node *temp = chain;
            chain = chain->next;
            delete temp;
        }
    }
    int length()
    {
        int length = 0;
        node *temp = chain;
        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }
        return length;
    }
    void selection_sort()
    {
        node *temp;
        node *n, *p = chain;
        while (p->next != NULL)
        {
            int min = INT32_MAX;
            temp = p;
            while (temp != NULL)
            {
                if (temp->data < min)
                {
                    min = temp->data;
                    n = temp;
                }
                temp = temp->next;
            }
            int t = p->data;
            p->data = min;
            n->data = t;
            p = p->next;
        }
    }
    void bubble_sort()
    {
        node *temp = chain;
        node *lindex = chain;
        while (lindex->next != NULL)
        {
            temp = chain;
            while (temp->next != NULL)
            {
                if (temp->data > temp->next->data)
                {
                    int t = temp->data;
                    temp->data = temp->next->data;
                    temp->next->data = t;
                }
                temp = temp->next; // 5ally balak tb2a
            }
            lindex = lindex->next;
        }
    }
};

main(void)
{
    list l(5);
    l.addfirst(10);
    l.addfirst(1);
    l.addfirst(3);
    // l.printall();
    // l.printr();
    //  cout << "\nsize is : "
    //  << l.length() << endl;
    // l.deletelist();
    // l.remove(10);
    // l.selection_sort();
    // l.printrlast();
    // l.bubble_sort();
    // l.printr();
    l.printrlast();
}
