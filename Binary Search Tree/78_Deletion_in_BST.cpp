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
Node *Search_iterative(Node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

Node *Predecessor(Node *root, int key)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

Node *Deletion(Node *root, int key)
{
    Node *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        delete (root);
        return NULL;
    }
    if (key < root->data)
    {
        root->left = Deletion(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = Deletion(root->right, key);
    }
    else
    {
        iPre = Predecessor(root, key);
        root->data = iPre->data;
        root->left = Deletion(root->left, iPre->data);
    }
    return root;
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

    InOrder(p);
    cout << " " << endl;
    Deletion(p, 6);
    InOrder(p);
    return 0;
}