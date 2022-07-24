#include <bits/stdc++.h>
#include <stack>
using namespace std;
class TreeNode
{
public:
    TreeNode(int x = 0, TreeNode *left = NULL, TreeNode *right = NULL) // lazem el arguments tb2a kda
    {
        data = x;
        this->left = left;
        this->right = right;
    }
    int getData()
    {
        return data;
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
        {
            return;
        }

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
        s.push(root);
        while (!s.empty())
        {
            cout << s.top()->data << " ";
            TreeNode *temp = s.top();
            s.pop();
            if (temp->right != NULL) // right first because i want to process the left first
                s.push(temp->right);
            if (temp->right != NULL)
                s.push(temp->left);
        }
    }
    void print_BreadthFirst(TreeNode *root)
    {
        myqueue.push(root);
        while (!myqueue.empty())
        {
            cout << myqueue.front()->data << " ";
            TreeNode *temp = myqueue.front();
            myqueue.pop();
            if (temp->left != NULL) // doesn't have to be right first in order to process the left first
                myqueue.push(temp->left);
            if (temp->right != NULL)
                myqueue.push(temp->right);
        }
    }
    int count_leaves(TreeNode *root)
    {
        // if root is null
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        return count_leaves(root->left) + count_leaves(root->right);
    }
    TreeNode *insert(TreeNode *root, int data)
    {
        if (root == NULL)
        {
            // cout << data << endl;
            return new TreeNode(data);
        }

        if (data > root->data)
        {

            root->right = insert(root->right, data);
        }
        else if (data <= root->data)
        {
            // cout << data << " ";
            root->left = insert(root->left, data);
        }
        return root;
    }
    TreeNode *getRoot()
    {
        return rootPtr;
    }
    TreeNode *FindMin(TreeNode *root)
    {
        if (root->left == NULL)
            return root;
        return FindMin(root->left);
    }
    TreeNode *Delete(TreeNode *root, int data)
    {
        if (root == NULL)
            return root;
        if (data < root->data)
        {
            root->left = Delete(root->left, data);
        }
        else if (data > root->data)
        {
            root->right = Delete(root->right, data);
        }
        else
        {
            if (root->right == NULL && root->left == NULL)
            {
                return NULL;
            }
            else if (root->right == NULL)
            {
                TreeNode *temp = root->left;
                delete (root);
                return temp;
            }
            else if (root->left == NULL)
            {
                TreeNode *temp = root->right;
                delete (root);
                return temp;
            }
            else
            {
                TreeNode *temp = FindMin(root->right);
                root->data = temp->data;
                root->right = Delete(root->right, temp->data);
            }
        }
        return root;
    }

private:
    TreeNode *rootPtr;
    stack<TreeNode *> s; // for DepthFirst Traverse
    queue<TreeNode *> myqueue;
};

int main(void)
{
    Tree tree;
    TreeNode *root = NULL;

    // tree.insert(tree.getRoot(), 3);
    root = tree.insert(root, 8);
    tree.insert(root, 3);
    tree.insert(root, 10);
    tree.insert(root, 1);
    tree.insert(root, 6);
    tree.insert(root, 7);
    tree.insert(root, 4);
    // tree.insert(root, 10);
    tree.insert(root, 14);
    tree.insert(root, 13);

    // tree.print_inOrderTraversal(root);
    // tree.print_PostOrderraversal(root);
    // tree.print_preorderTraversal(root);
    tree.Delete(root, 3);
    tree.print_BreadthFirst(root);
    // tree.print_DepthFirst(root);
}