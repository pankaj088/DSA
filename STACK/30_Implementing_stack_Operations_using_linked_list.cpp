#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

void Linked_List_Traversal(node *ptr)
{
    while (ptr != NULL)
    {
        cout << " Element is  " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int IsEmpty(node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsFull(node *ptr)
{
    node *p = new node();
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

node *push(node *top, int x)
{
    if (IsFull(top))
    {
        cout << " stack overflow " << endl;
    }
    else
    {
        node *n = new node();
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(node **top) // (node **top) ak local variable name hai
{
    if (IsEmpty(*top))
    {
        cout << " stack underflow" << endl;
    }
    else
    {
        node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    node *top = NULL;
    top = push(top, 75);
    top = push(top, 15);
    top = push(top, 9);
    Linked_List_Traversal(top);

    cout << " " << endl;

    int element = pop(&top);
    cout << " popped element is " << element << endl;
    Linked_List_Traversal(top);
    return 0;
}