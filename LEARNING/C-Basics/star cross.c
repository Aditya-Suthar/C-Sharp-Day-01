// Printing starcross

#include <stdio.h>
int main ()
{
int i=1,j=1,n;

printf ("Enter the value of n");
scanf ("%d",&n);

for (i=1;i<=n;i++)
{
    for (j=1;j<=n;j++)
    {
        if (i==j || i+j==n+1)
        printf ("*");

        else 
        printf (" ");
    }
    printf ("\n");
}
return 0;

}

