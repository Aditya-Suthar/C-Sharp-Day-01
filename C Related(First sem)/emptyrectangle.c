// Printing an emtpy rectangle with given values

#include <stdio.h>
int main ()
{
    int i,j,r,c;

    printf ("Enter the value of rows and column");
    scanf ("%d %d",&r,&c);

    for (i=1;i<=r;i++)
    { 
        {
        for (j=1;j<=c;j++)
        {
            
            if (j==1 || j==c || i==1 || i==r)
            printf ("*");

            else
            printf (" ");
        }
        }
    printf ("\n");

    }   
}