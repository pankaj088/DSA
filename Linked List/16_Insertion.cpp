#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

// yai function linklist me traversal kai liya hai
void Traversal(node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// CASE-1: Insertion in first node of linkedlist

node *Insert_In_first(node *head, int element)
{
    node *ptr = new node;
    ptr->next = head;
    ptr->data = element;
    return ptr;
}

// CASE-2: Insertion in between node of linked list

node *Insert_In_Between(node *head, int element, int index)
{
    node *ptr = new node;
    node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = element;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// CASE-3: Insertion node in last node

node *Insert_In_End(node *head, int element)
{
    node *ptr = new node;
    ptr->data = element;
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// CASE-4: Insertion node  in after given node

node *Insert_In_After_Node(node *head, node *previousNode, int element)
{
    node *ptr = new node;
    ptr->data = element;

    ptr->next = previousNode->next;
    previousNode->next = ptr;
    return head;
}

int main()
{

    // Allocate memory for nodes in the linked list in Heap
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();

    // Link head and second nodes
    head->data = 15;
    head->next = second;

    // link second and third nodes
    head->data = 25;
    head->next = third;

    // Link third and fourth nodes
    head->data = 35;
    head->next = fourth;

    // Link fourth nodes and last nodes
    head->data = 45;
    head->next = NULL;
    cout << "Before insertion" << endl;
    Traversal(head);
    cout << " " << endl;

    head = Insert_In_first(head, 50);
    cout << " After insertion first" << endl;
    Traversal(head);
    cout << " " << endl;

    cout << " After insertin in between" << endl;
    head = Insert_In_Between(head, 65, 1);
    Traversal(head);
    cout << " " << endl;

    cout << "After insertion in end" << endl;
    head = Insert_In_End(head, 75);
    Traversal(head);
    cout << " " << endl;

    cout << " After insert in Afternode" << endl;
    head = Insert_In_After_Node(head, second, 85);
    Traversal(head);
    cout << " " << endl;

    return 0;
}