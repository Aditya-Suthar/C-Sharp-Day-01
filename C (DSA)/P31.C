#include <stdio.h>

int GetRow();
int GetCol();


int main ()
{
    int row = GetRow(); // Taking input of No. of Rows
    int col = GetCol(); // Taking input of No. of Columns

    int arr[row][col]; // Initialising the array
    

    // Taking input of elements in orignal array

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf ("Enter the value of arr[%d][%d]:-",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }

    // counting number of non zero elements inside the array

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

    int sparse[count+1][3]; // initializing the sparse matrix

    sparse[0][0] = row;
    sparse[0][1] = col;
    sparse[0][2] = count;

    int k = 1;
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (arr[i][j] != 0)
            {
                sparse[k][0] = i; // Storing Row
                sparse[k][1] = j; // Storing Column
                sparse[k][2] = arr[i][j]; // Storing Value
                k++;
            }
        }
    }

    for (int i=0;i<count+1;i++)
    {
            printf ("\t %d \t %d \t %d\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    }




    return 0;
}

GetRow()
{
    int row=0;
    printf ("Enter the no. of rows of orignal matrix:- ");
    scanf ("%d",&row);
    return row;
}

GetCol()
{
    int col=0;
    printf ("Enter the no. of columns of orignal matrix:- ");
    scanf ("%d",&col);
    return col;
}

