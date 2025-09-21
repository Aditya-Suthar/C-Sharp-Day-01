//input numers for design of stair type drawings

#include <stdio.h>
int main ()
{
    int row,col,n,i=0;
    
    printf ("Enter the value of n");
    scanf ("%d",&n);

    for (row=1;row<=n;row++){
        for (col=1;col<=n;col++)
        {
            i = i+1;
            printf ("%d",i);
        }
        printf("\n");
    }

}