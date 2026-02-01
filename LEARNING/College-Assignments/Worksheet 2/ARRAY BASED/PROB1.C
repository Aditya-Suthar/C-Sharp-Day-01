#include <stdio.h>

int main()

{
    int n;

    // i/p of n
    printf ("Enter the value of n:-");
    scanf ("%d",&n);

    // intiliasing an array
    int arr[n];


    // i/p array elements
    for (int i=0;i<n;i++)
    {
        printf ("Enter the arr[%d]",i);
        scanf ("%d",&arr[i]);
    }

    int valid = 0;

    for (int i=0;i<n-1;i++)
    {
        if (arr[i] < arr[i+1])
        {
            valid = 1;
        }

        else
        {
            valid = 0;
            break;
        }
    }

    if (valid == 0)
    {
        printf ("Not in ascending order");
    }

    else
    {
        printf ("An ascending order");
    }
    
    return 0;
}