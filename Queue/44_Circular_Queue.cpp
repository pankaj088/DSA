#include <iostream>

using namespace std;

class Circular_Queue
{
public:
    int fronted;
    int lastend;
    int size;
    int *arr;
};

int Full(Circular_Queue *ar)
{
    if ((ar->lastend + 1) % ar->size == ar->fronted)
    {
        cout << " Circular Queue is full" << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

int Empty(Circular_Queue *ar)
{
    if (ar->fronted == ar->lastend)
    {
        cout << " Circular Queue is empty" << endl;
        return 1;
    }
    else
    {
        return 0;
    }
}

void Enqueue(Circular_Queue *ar, int val)
{
    if (Full(ar))
    {
    }
    else
    {
        ar->lastend = (ar->lastend + 1) % ar->size;
        ar->arr[ar->lastend] = val;
    }
}

void Dequeue(Circular_Queue *ar)
{
    int val = -1;
    if (Empty(ar))
    {
    }
    else
    {
        ar->fronted = (ar->fronted + 1) % ar->size;
        int val = ar->arr[ar->fronted];
        cout << " Dequeue element is:" << val;
    }
}

void printt(Circular_Queue *ar)
{
    if (Empty(ar))
    {
    }
    else
    {
        if (ar->lastend < ar->fronted)
        {
            for (int i = ar->fronted + 1; i <= ar->size - 1; i++)
            {
                cout << "The Element is :- " << ar->arr[i] << endl;
            }
            int q = 0;
            while (q <= ar->lastend)
            {
                cout << "The Element is :- " << ar->arr[q] << endl;
                q++;
            }
        }
        else
        {
            for (int i = ar->fronted + 1; i <= ar->lastend; i++)
            {
                cout << "The Element is :- " << ar->arr[i] << endl;
            }
        }
    }
}

int main()
{
    Circular_Queue *q = new Circular_Queue();
    q->size = 20;
    q->fronted = 0;
    q->lastend = 0;
    q->arr = new int[q->size];

    Enqueue(q, 89);
    Enqueue(q, 56);
    Enqueue(q, 12);
    Enqueue(q, 90);
    Enqueue(q, 51);
    Enqueue(q, 11);
    printt(q);

    Dequeue(q);
    Dequeue(q);
    // printt(q);

    Enqueue(q, 1);
    Enqueue(q, 3);
    printt(q);

    return 0;
}