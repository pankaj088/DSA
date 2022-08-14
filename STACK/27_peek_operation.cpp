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

int main()
{

    stack *sp = new stack;
    sp->size = 5;
    sp->top = -1;
    sp->arr = new int[sp->size];

    push(sp, 55);
    push(sp, 5);
    push(sp, 7);
    push(sp, 14);
    push(sp, 3);

    printt(sp);

    // Given position pe value find kr rhe hai
    peek(sp, 3);
    peek(sp, 65); // yha or yaha se value nhi dega becouse dono formate glt hai
    peek(sp, 0);

    return 0;
}