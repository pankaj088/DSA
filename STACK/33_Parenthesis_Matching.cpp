#include <iostream>

using namespace std;

class stack
{
public:
    int size;
    int top;
    char *arr;
};

int isEmpty(stack *ptr)
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

int isFull(stack *ptr)
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

void push(stack *ptr, char val)
{
    if (isFull(ptr))
    {
        cout << " stack overflow " << val << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

void pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        // cout << "Stack Underflow! Cannot pop from the stack" << endl;
        // return -1;
        return;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        // return val;
    }
}

int parenthesisMatch(string exp)
{
    // Create and initialize the stack
    stack *sp = new stack;
    sp->size = 100;
    sp->top = -1;
    sp->arr = new char[sp->size];
    // sp->arr = (char *)malloc(sp->size * sizeof(char));
    // cout<<sp->top<<"gggg"<<endl;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }

    if (isEmpty(sp))
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
    string exp = "((8)(*--$$9))";
    // Check if stack is empty
    if (parenthesisMatch(exp))
    {
        cout << "The parenthesis is matching";
    }
    else
    {
        cout << "The parenthesis is not matching";
    }
    return 0;
}
