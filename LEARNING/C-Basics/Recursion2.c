#include <stdio.h>

int count(int n);

int main ()
{
    int n;

    printf("Enter the number");
    scanf ("%d",&n);

    count(n);
    int result = count(n);
    printf("The number of digits are %d",result);
}

int count (int n)
{
    if (n==0)
    {
        return 0;
    }

    return 1 + count (n/10);
}