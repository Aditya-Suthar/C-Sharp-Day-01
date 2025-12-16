#include <stdio.h>

int sum (int n);

int main (void)
{
    int n;
    printf ("Please enter the value of n");
    scanf ("%d",&n);

    sum(n);
    int result = sum(n);
    printf ("The value of sum is %d",result);
}

int sum (int n)
{
    if (n==0)
    {
        return 0;
    }

    return n%10+sum(n/10);
}