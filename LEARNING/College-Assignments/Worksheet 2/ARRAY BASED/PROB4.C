#include <stdio.h>

int main()

{
    // return row whose sum is the lowest in the matrix

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

    int sum[n];
    int k=0;

    for (int i=0;i<n;i++)
    {
        int s = 0;
        for (int j=0;j<n;j++)
        {
            s += arr[j][i];
        }
        sum[k] = s;
        k++;
    }

    int max = sum[0];
    int row = 0;

    for (int i=1;i<n;i++)
    {
        if (sum[i]>max)
        {
            max = sum[i];
            row = i;
        }
    }

    printf ("The maximum value is %d of row no. %d",sum[row],row+1);
    return 0;
}