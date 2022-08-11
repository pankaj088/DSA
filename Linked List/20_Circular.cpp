#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

void Linked_List_Traversal(node *head)
{
    node *ptr = head;
    do
    {
        cout << " Element is " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

node *Insert_AT_Head(node *head, int data)
{

    node *p = head->next;
    node *q = new node;
    q->data = data;

    while (p->next != head)
    {

        p = p->next;
    }

    q->next = p->next; //  yha pe p last node ko point kr rha hai
    p->next = q;
    head = q;
    return head;
}

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();

    head->data = 7;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    cout << " Circular linked list befofre insertion " << endl;
    Linked_List_Traversal(head);

    cout << " " << endl;

    cout << "after insrting node at head in linked list" << endl;
    // Insert_AT_Head(head, 45);
    head = Insert_AT_Head(head, 45);
    Linked_List_Traversal(head);

    return 0;
}