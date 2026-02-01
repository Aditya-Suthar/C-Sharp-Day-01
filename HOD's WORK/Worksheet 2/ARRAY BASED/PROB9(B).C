#include <stdio.h>

int main()

{
    int n;

    printf ("Enter the value of n:-");
    scanf ("%d",&n);

    int arr[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("arr[Row no:- %d][Col no:-%d]:-",i+1,j+1);
            scanf ("%d",&arr[i][j]);
        }
    }

    printf ("\t ORIGNAL ARRAY :- \n");

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("\t%d\t",arr[i][j]);
        }

        printf ("\n");
    }

    for (int i=0;i<n;i++)
    {
        int row_max = arr[i][0];
        int col_no = 0;

        for (int j=1;j<n;j++)
        {
            if (arr[i][j]>row_max)
            {
                row_max = arr[i][j];
                col_no = j;
            }
        }

        // swapping the last element with the max

        int temp = arr[i][col_no];
        arr[i][col_no] = arr[i][n-1];
        arr[i][n-1] = temp;
    }

    printf ("\t REVISED ARRAY :- \n");

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("\t%d\t",arr[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
