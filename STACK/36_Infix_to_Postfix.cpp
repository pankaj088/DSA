#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    char *arrr;
};

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

int operatorr(char c)
{
    if (c == '+' || c == '-' || c == '/' || c == '*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char c)
{
    if (c == '*' || c == '/')
    {
        return 5;
    }
    else if (c == '+' || c == '-')
    {

        return 3;
    }
    else
    {
        return 0;
    }
}

char stacktopp(stack *ptr)
{
    char a = ptr->arrr[ptr->top];
    return a;
}
void push(stack *&ptr, char c)
{
    if (fulll(ptr))
    {
        cout << "Stack overflow ho chuka hai " << endl;
    }
    else
    {
        ptr->top++;
        ptr->arrr[ptr->top] = c;
    }
}
char pop(stack *&ptr)
{
    if (emptyy(ptr))
    {
        cout << "stack underflow ho chuka hai " << endl;
        return -1;
    }
    else
    {
        char c = ptr->arrr[ptr->top];
        ptr->top--;
        return c;
    }
}
char *infix_to_POstfix(char *infix, stack *ptr)
{
    char *postfix = new char[100];
    int i = 0; // Track infix traversal
    int j = 0; // Track podtfix addition

    while (infix[i] != '\0')
    {
        if (!operatorr(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stacktopp(ptr)))
            {
                push(ptr, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(ptr);
                j++;
            }
        }
    }
    while (!emptyy(ptr))
    {
        postfix[j] = pop(ptr);
        j++;
    }
    postfix[j] = '\0';
    // cout<<postfix<<endl;
    return postfix;
}

int main()
{
    stack *ptr = new stack();
    ptr->size = 100;
    ptr->top = -1;
    ptr->arrr = new char[ptr->size];
    char infix[] = "x-y/z-k*d";
    cout << " postfix is: " << infix_to_POstfix(infix, ptr);

    // cout << "Enter the expression " << endl;
    // cin >> infix;
    // infix_to_POstfix(infix, abhi);
    // char *a = infix_to_POstfix(infix, ptr);
    // cout << a << endl;

    return 0;
}