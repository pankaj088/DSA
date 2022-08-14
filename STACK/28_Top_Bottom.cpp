#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int *arr;
};

void printt(stack *ar)
{
    cout << "print the given stack " << endl;

    for (int i = ar->top; i >= 0; i--)
    {

        cout << ar->arr[i] << endl;
    }
}

int fulll(stack *ptr)
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

int emptyy(stack *ptr)
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

void push(stack *ptr, int val)
{ // iss function se hm stack Abstract_Data_type me push kr rhe hai
    if (fulll(ptr))
    {
        cout << "stack is full or overflow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

void pop(stack *ptr)
{

    if (emptyy(ptr))
    {
        cout << "stackk is empty or underflow" << endl;
    }
    else
    {

        int val = ptr->arr[ptr->top];
        cout << val << " is poped form the the given stack" << endl;
        ptr->top--;
    }
}

void peek(stack *ptr, int position) // position(i) hai
{
    int arrayInt = ptr->top - position + 1;
    if (position <= 0 || position > ptr->size)
    {
        cout << " given position is not correct" << endl;
    }
    else
    {
        cout << " In stack at postion " << position << " the vale is " << ptr->arr[arrayInt] << endl;
    }
}

int StackTOP(stack *sp)
{
    return sp->arr[sp->top];
}

int StackBottom(stack *sp)
{
    return sp->arr[0];
}

int main()
{

    stack *sp = new stack;
    sp->size = 10;
    sp->top = -1;
    sp->arr = new int[sp->size];

    push(sp, 85);
    push(sp, 5);
    push(sp, 7);
    push(sp, 14);
    push(sp, 3);
    push(sp, 56);
    push(sp, 1);

    printt(sp);

    cout << " " << endl;

    cout << " the top most of value of this stack is " << StackTOP(sp) << endl;
    cout << " the bottom most of value of this stack is " << StackBottom(sp) << endl;

    return 0;
}