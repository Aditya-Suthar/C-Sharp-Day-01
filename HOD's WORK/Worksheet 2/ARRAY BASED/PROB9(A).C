#include <stdio.h>

int main ()

{
    int arr[2][2];
    int new_arr[2][2];

    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf ("arr[Row no-%d][Column no-%d]:-",i+1,j+1);
            scanf ("%d",&arr[i][j]);
        }
    }

    // checking for largest in every row
 
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<1;j++)
        {
            if (arr[i][j]<arr[i][j+1])
            {
                new_arr[i][j] = arr[i][j];
                new_arr[i][j+1] = arr[i][j+1];
            }

            else
            {
                new_arr[i][j+1] = arr[i][j];
                new_arr[i][j] = arr[i][j+1];
            }
        }
    }

    printf ("\t ORIGNAL ARRAY :- \n");

    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf ("\t%d\t",arr[i][j]);
        }

        printf ("\n");
    }

    printf ("\t NEW ARRAY:- \n");

    for(int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf ("\t%d\t",new_arr[i][j]);
        }
        printf ("\n");
    }


    return 0;
}