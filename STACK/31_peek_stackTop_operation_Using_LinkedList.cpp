#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *top = NULL; // Global veriable banta peek ka top aceess karne kai liye

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
        return top;
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

node *pop(node *top) // (node **top) ak local variable name hai
{
    if (IsEmpty(top))
    {
        cout << " stack underflow" << endl;
        return top;
    }
    else
    {
        node *n = top;
        top = (top)->next;
        cout << " popped element is " << n->data << endl;
        free(n);
        return top;
    }
}

int peek(int position)
{
    node *ptr = top;
    for (int i = 0; (i < position - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int main()
{
    top = push(top, 28);
    top = push(top, 81);
    top = push(top, 51);
    top = push(top, 1);
    Linked_List_Traversal(top);

    cout << " " << endl;

    for (int i = 1; i <= 4; i++) // yaha i=1 yani index 1 se start ho raha hai or index 1 se position dega
    {
        cout << " Value of posstion is  " << i << " : " << peek(i) << endl;
        //   printf("Value at position %d is : %d\n", i, peek(i));
    }

    return 0;
}