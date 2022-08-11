#include <iostream>

using namespace std;

class node
{

public:
    int data;
    node *next; // node ak user defined data type hai  jaise int ak integer data type hota hai:
                //  yai node* tpye ka pointer hai jo next ko point karta hai:

    node(int a) // yaha constructer banye
    {
        data = a;
    }
};

void LinkedlistTraversal(node *ptr) // yai node * type ka pointer hai or yai head node ko point karta hai
{
    node *temp = ptr;
    while (temp != NULL)
    {
        cout << "Element is: " << temp->data << endl;
        // cout<<"Element is:" <<ptr->next<<endl;
        temp = temp->next;
    }
    // yaha ptr ka value null hi h kyuki hm temp ko change kiye h

    while (ptr != NULL)
    {
        cout << "Element is: " << ptr->data << endl;
        // cout<<"Element is:" <<ptr->next<<endl;
        ptr = ptr->next;
    }
}

int main()
{
    // node *head;
    // node *second;
    // node *third;
    // node *fourth;

    // Allocate memory for nodes in the linked list in heap:

    node *head = new node(7);
    node *second = new node(8);
    node *third = new node(9);
    node *fourth = new node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    LinkedlistTraversal(head);

    // cout<<&head<<"  "<<head<<endl;

    return 0;
}