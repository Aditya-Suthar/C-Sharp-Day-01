//Drawing a star plus

#include <stdio.h>
int main (void)

{
    int i , j , n;

    printf ("Enter the value of n :- ");
    scanf("%d",&n);

    if (n%2!=0)
    {
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (i==(n+1)/2 || j==(n+1)/2)
                printf("*");
            else
                printf(" ");
        }
    printf("\n");     
    }
}
    else 
    printf ("Please enter an odd value");
    
return 0;
}