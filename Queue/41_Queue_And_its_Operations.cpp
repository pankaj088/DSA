#include <iostream>

using namespace std;

class Queue
{
public:
    int size;
    int frontend;
    int lastend;
    int *arr;
};

int IsFull(Queue *ptr)
{
    if (ptr->lastend == ptr->size - 1)
    {
        cout << " Queue is full" << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsEmpty(Queue *ptr)
{
    if (ptr->frontend == ptr->lastend)
    {
        cout << " Queue is empty " << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

void EnQueue(Queue *&ptr, int val)
{
    if (IsFull(ptr))
    {
        cout << " Queue is full " << endl;
    }
    else
    {
        ptr->lastend++;
        ptr->arr[ptr->lastend] = val;
        cout << " Enqued element " << endl;
    }
}

void DeQueue(Queue *&ptr)
{
    if (IsEmpty(ptr))
    {
        cout << " Queue is empty" << endl;
    }
    else
    {
        ptr->frontend++;
    }
}

void print(Queue *ptr)
{
    for (int i = ptr->frontend + 1; i <= ptr->lastend; i++)
    {
        cout << " Element is " << ptr->arr[i] << endl;
    }
}

int main()
{
    Queue *q = new Queue();
    q->size = 10;
    q->frontend = -1;
    q->lastend = -1;
    q->arr = new int[q->size];

    // q->arr[0] = 4;
    // q->lastend++;

    // q->arr[1] = 6;
    // q->lastend++;

    // q->arr[2] = 8;
    // q->lastend++;
    // print(q);

    EnQueue(q, 85);
    EnQueue(q, 36);
    EnQueue(q, 32);
    EnQueue(q, 40);
    EnQueue(q, 56);
    print(q);

    //  After Dequeue
    cout << "After dequeue the queue is :  " << endl;
    DeQueue(q);
    DeQueue(q);
    print(q);

    return 0;
}