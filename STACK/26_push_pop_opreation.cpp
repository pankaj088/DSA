#include <iostream>

using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
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

void push(stack *ptr, int val)
{
    if (IsFull(ptr))
    {
        cout << " stack is  full or overflow "<< endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(stack *ptr)
{
    if (IsEmpty(ptr))
    {
        cout << " stack is empty or underflow "<< endl;
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
       // cout << " is poped from the given stack"<< endl;
        ptr->top--;
        return val;
    }
}

int main()
{
    stack *sp = new stack();
    sp->size = 5;
    sp->top = -1;
    sp->arr = new int[sp->size];

    cout << " check stack is full or empty" << endl;
    // print 1 if full else 0
    cout <<  IsFull(sp) << endl;
    // print 1 if empty else 0
    cout <<  IsEmpty(sp) << endl;

    // push in stack Absrac data type
    push(sp, 45);
    push(sp, 21);
    push(sp, 54);
    push(sp, 63);
    push(sp, 6);
    push(sp, 1); // yaha se stack overflow hone lagiga kuki stack full ho gya hai
    push(sp, 89);
    
      cout << " " << endl;
    cout << "checking stack is full or empty" << endl;
    // print 1 if full else 0
    cout << IsFull(sp) << endl;
    // print 1 if empty else 0
    cout << IsEmpty(sp) << endl;

    cout << " " << endl;

    // pop from given stack
    cout << " after pop from the given stack " << endl;
    pop(sp);
    pop(sp);
    pop(sp);
   


    return 0;
}