#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *CreateNode(int val)
{
    Node *n = new Node();
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void PreOreder(Node *root) // root->left->Right
{
    if (root != NULL)
    {
        cout << root->data << " ";
        PreOreder(root->left);
        PreOreder(root->right);
    }
}

void PostOrder(Node *root) // left->Right->root
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }
}

void InOrder(Node *root) // left->root->Right
{
    if (root != NULL)
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}

// Binary Search Tree(BST)
int isBST(Node *root)
{
    static Node *Previous = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0; // yani ki false
        }

        if (Previous != NULL && root->data <= Previous->data)
        {
            return 0;
        }
        Previous = root;
        return isBST(root->right);
    }
    else
    {
        return 1; // true yani ki binary search tree hai
    }
}

// FOr Searching
Node *search(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

int main()
{
    Node *p = CreateNode(5);
    Node *p1 = CreateNode(3);
    Node *p2 = CreateNode(6);
    Node *p3 = CreateNode(1);
    Node *p4 = CreateNode(4);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    Node *n = search(p, 1);
    if (n != NULL)
    {
        cout << " Found " << n->data << endl;
    }
    else
    {
        cout << " Not Found ";
    }

    return 0;
}