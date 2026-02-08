#include <stdio.h>

int main ()

{
    int row,col;

    printf ("Enter the value of row:-");
    scanf ("%d",&row);

    printf ("Enter the value of col:-");
    scanf ("%d",&col);

    int arr[row][col];

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf ("Enter the value of arr[%d][%d]",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }

    int count = 0;

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (arr[i][j] != 0)
            {
                count++;
            }
        }
    }
 
    int sparse[count][3] ;

    for (int i=0;i<count;i++)
    {
        for (int j=0;j<3;j++)
        {
            sparse[i][j] = 0;
        }
    }
    int k=0;

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (arr[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = arr[i][j];
                k++;
            }
        }
    }

    printf ("ROW COL VALUE\n");

    for (int i=0;i<count;i++)
    {
        printf ("%d   %d   %d\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    }

    // to find transpose

    for (int i=0;i<count;i++)
    {
        // swapping row and colns

        int temp = sparse[i][0];
        sparse[i][0] = sparse[i][1];
        sparse[i][1] = temp;
    }

    // now comes the sorting
    
    for (int i=0;i<count-1;i++)
    {
        for (int j=0;j<count-i-1;j++)
        {
            if (sparse[j][0] > sparse[j+1][0] || (sparse[j][0] == sparse[j+1][0] && sparse[j][1] > sparse[j+1][1]))
            {
                // swapping all three

                for (int x=0;x<3;x++)
                {
                    int temp = sparse[j][x];
                    sparse[j][x] = sparse[j+1][x];
                    sparse[j+1][x] = temp;
                }
            }
        }
    }
    
    
}