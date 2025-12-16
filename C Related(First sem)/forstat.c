#include <stdio.h>
int main (void)

{
    int n ,sum=0,i;

    printf ("Enter the value of n");
    scanf ("%d",&n);

    for (i=0;i<=n;i++)
    {
        sum = sum + i ;
    }
        printf ("The sum of the numbers is = %d",sum);
    
    getchar();
    return 0;
}