// stacks

#include <stdio.h>

#define MAX 4

int stack_arr[MAX];
int top = -1;
int value;

void push (int data);

int pop();
void print ();

int main()

{
    push(1);
    push(2);
    push(3);
    push(4);
    value = pop();
    value = pop();

    print();
    return 0;
}

void push (int data)

{
    if (top == MAX-1)
    {
        printf ("stack overflow");
        return;
    }
    top = top +1;
    stack_arr[top] = data;

}

int pop ()
{ 
    if (top == -1) 
    {
        printf ("Underflow Stack");
        return -1;
    }

    int value;
    value = stack_arr[top];
    top = top-1;
    return value;
}

void print ()

{
    int i;

    if (top == -1) 
    {
        printf ("Underflow Stack");
        return;
    }

    for (i=top;i>=0;i--)
    {
        printf ("%d\n",stack_arr[i]);
    }
}