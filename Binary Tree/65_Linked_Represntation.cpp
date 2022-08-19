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

int main()
{

    /*
// Constructing the root node
struct node *p;
Node *p = new Node();
p->data = 2;
p->left = NULL;
p->right = NULL;

// Constructing the second node
struct node *p1;
Node  *p1  = new Node();
p->data = 1;
p1->left = NULL;
p1->right = NULL;

// Constructing the third node
struct node *p2;
Node *p2 = new node();
p->data = 4;
p2->left = NULL;
p2->right = NULL;
*/

    // constructing the Root Node- Using Function
    Node *p = CreateNode(2);
    Node *p1 = CreateNode(4);
    Node *p2 = CreateNode(1);

    // Linking the Root  Node with left and Right Children
    p->left = p1;
    p->right = p2;

    return 0;
}