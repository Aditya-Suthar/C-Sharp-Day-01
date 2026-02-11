#include <stdio.h>

#define MAX 1000

int stack[MAX];
int top = -1;

int inp_n();
void inp_arr(int n,int arr[]);
void palindrome(int n,int arr[]);
void push(int data);
int pop();

int main ()

{
    int n = inp_n();

    int arr[n];

    inp_arr(n,arr);

    palindrome(n,arr);
    return 0;
}

int inp_n()
{
    int n;

    printf ("Enter the value of n:-");
    scanf ("%d",&n);

    return n;
}

void inp_arr(int n,int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf ("arr[%d]",i);
        scanf ("%d",&arr[i]);
    }
}

void palindrome(int n,int arr[])
{
    for (int i=0;i<n/2;i++)
    {
        int data = arr[i];
        push(data);
    }

    for (int i=(n+1)/2;i<n;i++)
    {
        if (pop() != arr[i])
        {
            printf ("Not Palindrome");
            return ;
        }

        printf("Palindrome");
        return ;
    }
}

void push(int data)
{
    if (top == MAX-1)
    {
        printf ("Stack Overflow");
        return;
    }

    top = top+1;
    stack[top] = data;
}

int pop()
{
    if (top == -1)
    {
        printf ("Stack Underflow");
        return -1;
    }

    int value = stack[top];
    top = top-1;
    return value;
}

