#include <iostream>
#include <list>
using namespace std;
class Node
{
private:
    int data;
    // Node *children[100];
    list<Node *> children; // must put the asterisk

public:
    Node(int data)
    {
        this->data = data;
    }
    friend class Tree;
};
class Tree
{
private:
    Node *root;

public:
    Tree(Node *root = NULL)
    {
        this->root = root;
    }
};

int main(void)
{
}