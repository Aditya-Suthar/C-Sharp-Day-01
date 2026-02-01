//To find the factorial of a given number

#include <stdio.h>
int main (void)
{
    int n , i ;
    int fact = 1;

    printf ("Enter a number for finding factorial");
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
    fact = fact * i ;
    }
    printf ("%d",fact);
    getchar();
    return 0;
}