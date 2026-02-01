// For making an empty equilateral triangle of speically 4 sides
// Lengthy process if anyone has better idea tell!

#include <stdio.h>
int main (void)

{
    int n=4 ;


    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-2;j++)
        {
           { if((i==1 && j==n) || (i==2 && (j==n-1 || j==n+1)) || 
                (i==3 && (j==n-2 || j==n+2)) || (i==4 
                && (j==n-3 || j==n+3)) )
            printf ("*");
            
            else if (i==4 && j<=n)
            printf (" *");
            
            else 
                printf(" ");
           }
        }
        printf ("\n");
        }
        return 0;


}