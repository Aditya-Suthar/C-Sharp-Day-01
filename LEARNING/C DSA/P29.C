#include <stdio.h>

int main ()

{
    int arr[10][10],sparse[50][3];
    int k = 1;
    int row,col;

    printf ("Enter the number of rows,columns respectively:-");
    scanf ("%d %d",&row,&col);

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf ("Enter values [(%d):(%d)]\n= ",i,j);
            scanf ("%d",&arr[i][j]);

            if (arr[i][j]!=0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = arr[i][j];
                k++;
            }
        }
    }

    sparse[0][0] = row;
    sparse[0][1] = col;
    sparse[0][2] = k-1;

    printf ("\n Sparse Matrix (Triplet Form):-\n");
    printf ("Row Col Value \n");

    for (int i=0;i<k;i++)
    {
        printf ("%d %d %d\n",sparse[i][0],sparse[i][1],sparse[i][2]);
    }

    return 0;

}
