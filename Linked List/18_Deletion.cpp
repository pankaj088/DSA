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
        cout << " Element is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// CASE-1: Deleting the first element from the linked list

node *Delete_First(node *head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// CASE-2: Deleting the element at a given index from the Linked list

node *Delete_At_Index(node *head, int index)
{
    node *p = head;
    node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// CASE-3: Deleting the last element

node *Delete_At_Last(node *head)
{
    node *p = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// case-4: Deleting the element with a given value from the linked list

node *Delete_At_Value(node *head, int value)
{
    node *p = head;
    node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data = value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();

    head->data = 4;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    cout << "Linked List before deletion" << endl;
    Linked_List_Traversal(head);

    cout << " " << endl;

    // head = Delete_First(head);
    // head = Delete_At_Index(head, 2);
    // head = Delete_At_Last(head);
    head = Delete_At_Value(head, 6);

    cout << "Linked List after deletion " << endl;
    Linked_List_Traversal(head);

    return 0;
}