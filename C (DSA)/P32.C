#include <stdio.h>

//It is differnet from problem 31 because we are going to find transpose
//of sparse matrix

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

    int transpose[count+1][3];

    for (int i=0;i<count+1;i++)
    {
        // Interchanging the rows and columns
        transpose[i][1] = sparse[i][0];
        transpose[i][0] = sparse[i][1];
        transpose[i][2] = sparse[i][2];
    }

    //now sorting the old columns/new rows

    for (int i=1;i<count+1;i++)
    {
        // Selection Sort
        int min;
        int k = i;
        min = transpose[i][0];

        for (int j=i+1;j<count+1;j++)
        {
            if (min > transpose[j][0])
            {
                min = transpose[j][0];
                k = j;
            }
        }

        int t;

        // swapping colns
        t = transpose[i][0];
        transpose[i][0] = transpose[k][0];
        transpose[k][0] = t;

        // swapping rows
        t = transpose[i][1];
        transpose[i][1] = transpose[k][1];
        transpose[k][1] = t;

        // swapping values
        t = transpose[i][2];
        transpose[i][2] = transpose[k][2];
        transpose[k][2] = t;
     }

    for (int i=0;i<count+1;i++)
        {
            printf ("\t %d \t %d \t %d\n",transpose[i][0],transpose[i][1],transpose[i][2]);
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



