#include <bits/stdc++.h>
#include <stack>
using namespace std;
class TreeNode
{
public:
    TreeNode(int x)
    {
        data = x;
    }

private:
    int data;
    TreeNode *left;
    TreeNode *right;
    friend class Tree;
};
class Tree
{
public:
    Tree(TreeNode *rootPtr = NULL)
    {
        this->rootPtr = rootPtr;
    }
    TreeNode *binary_Search(int x)
    {
        TreeNode *temp = rootPtr;
        if (temp == NULL)
            return NULL;
        while (temp != NULL)
        {
            if (temp->data == x)
                return temp;
            else if (temp->data < x)
            {
                temp = temp->left;
            }
            else
                temp = temp->right;
        }
    }
    void print_inOrderTraversal(TreeNode *root)
    {
        if (root == NULL)
            return;
        print_inOrderTraversal(root->left);
        cout << root->data << " ";
        print_inOrderTraversal(root->right);
    }
    void print_preorderTraversal(TreeNode *root)
    {
        if (root == NULL)
            return;
        cout << root->data << " ";
        print_inOrderTraversal(root->left);
        print_inOrderTraversal(root->right);
    }
    void print_PostOrderraversal(TreeNode *root)
    {
        if (root == NULL)
            return;
        print_inOrderTraversal(root->left);
        print_inOrderTraversal(root->right);
        cout << root->data << " ";
    }
    void print_DepthFirst(TreeNode *root)
    {
    }

private:
    TreeNode *rootPtr;
    stack<TreeNode *> s;
};

int main(void)
{
}
