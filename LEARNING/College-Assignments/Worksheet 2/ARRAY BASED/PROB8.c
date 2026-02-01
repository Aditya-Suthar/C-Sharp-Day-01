#include <stdio.h>

int main ()

{
    int n;

    printf ("Enter the value of n:-");
    scanf ("%d",&n);

    int arr[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("arr[%d][%d]:-",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }

    int max = arr[0][0];
    int new_row = 0;
    int new_col = 0;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i][j]>max)
            {
                max = arr[i][j];
                new_row = i;
                new_col = j;
            }
        }
    }

    printf ("The maximum value is arr[%d][%d]:- %d",new_row,new_col,max);
    return 0;

    
}