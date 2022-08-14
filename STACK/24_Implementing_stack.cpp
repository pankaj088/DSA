#include <iostream>

using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr; // yai ak integer pointer hai, jiske help se hm Dynamically memory allocate karige:
};

int IsEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int IsFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // stack s;// = new stack();
    // s.size = 40;
    // s.top = -1;
    // s.arr = new int[s.size];

    stack *s = new stack(); // yaha hm dyanmic memory allocate kara rahe hai
    s->size = 40;
    s->top = -1;               // element esme hai hi nhi
    s->arr = new int[s->size]; // yaha hm array banye

    // pushing an element manually
    // s->arr[0] = 5;
    // s->top++;

    // Check if stack is empty
    if (IsEmpty(s))
    {
        cout << " the stack is empty " << endl;
    }
    else
    {
        cout << " the stack is not empty " << endl;
    }

    return 0;
}