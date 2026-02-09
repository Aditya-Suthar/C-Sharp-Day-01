#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[100] ;
int top = -1 ;
void push(int data) ;
int pop() ;
int main ()

{
    char str[1000];

    int n,i,data;

    gets(str);

    n = strlen(str);

    for (i=0;i<n/2;i++)
    {
        data = str[i];
        push(data);
    }

    for (i=(n+1)/2;i<n;i++)
    {
        if ( str[i] != stack[top])
        {
            printf ("Not palindrome");
            return 0;
        }
        pop();
    }
    printf ("Palindrome");
}

void push(int data)
{
    if (top == MAX-1)
    {
        printf ("INVALID");
        return ;
    }

    top = top+1;
    stack[top] = data;
}

int pop()
{
    if (top == -1)
    {
        return -1;
    }

    int value;
    value = stack[top];
    top = top-1;
    return value;
}
