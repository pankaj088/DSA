#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// yaha hm Global variable bana ke bhi kar sakte hai
//  Node *f = NULL;                 | to esko main kai bad likhne ka kue jarurat nhi hoga
//     Node *r = NULL;              |
// fronted(f) , rear(r)

void Enqueue(Node *&f, Node *&r, int val) // or yahi bhi (Node *&f, Node *&r) nhi likhege kukuki esko hm pahle hi difine kar diye hai
{
    Node *n = new Node();
    if (n == NULL)
    {
        cout << " Queue is Full" << endl;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int Dequeue(Node *&f) // yaha bhi (Node *&f) nhi likhna hoga
{
    int val = -1; // pahle jo value nikalne bali hai usko -1 kar do:
    Node *ptr = f;
    if (f == NULL)
    {
        cout << " Queue is Empty" << endl;
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

void Linked_List_Traversal(Node *ptr)
{
    cout << " Printing the elements of this linked List" << endl;
    while (ptr != NULL)
    {
        cout << " Element is " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    Node *f = NULL;
    Node *r = NULL;

    Enqueue(f, r, 17);
    Enqueue(f, r, 34);
    Enqueue(f, r, 51);
    Enqueue(f, r, 68);
    Enqueue(f, r, 85);
    Linked_List_Traversal(f);

    cout << " " << endl;

    cout << " After Dequeue " << endl;
    Dequeue(f);
    Dequeue(f);
    Dequeue(f);
    Linked_List_Traversal(f);

    return 0;
}