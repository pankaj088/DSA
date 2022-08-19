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

void PreOreder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        PreOreder(root->left);
        PreOreder(root->right);
    }
}
int main()
{
    Node *p = CreateNode(6);
    Node *p1 = CreateNode(1);
    Node *p2 = CreateNode(8);
    Node *p3 = CreateNode(2);
    Node *p4 = CreateNode(7);

    // Finally The tree looks like this:
    //      6(p)
    //     /    \
    //    1(p1)   8(p2)
    //   /    \
    //  2(p3)  7(p4)

    // Linking the Root Node with left and Right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    PreOreder(p);

    return 0;
}