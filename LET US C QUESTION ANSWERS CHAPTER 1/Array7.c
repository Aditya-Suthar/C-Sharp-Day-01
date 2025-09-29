// Entering the value in variable input of matrix
#include <stdio.h>
int main (void)
{

int row, col;

printf ("Enter the value of row and column respectively");
scanf ("%d %d",&row,&col);

int a[row][col];

for (int i=0;i<row;i++)
{
    for (int j=0;j<col;j++)
    {
         printf ("Enter the value of a[%d][%d] :-",i,j);
         scanf ("%d",&a[i][j]);
         printf ("\n");
    }
    printf ("\n");


for (int i=0;i<row;i++)
{
    for (int j=0;j<col;j++)
    {
        printf ("%d",a[i][j]);
    }
    
    print("\n");
}
return 0;
}
