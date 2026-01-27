#include <stdio.h>


int LargeNum(int arr[],int n);
int main()

{
    // largest element from an array using recursion
    int n;

    printf("Enter the number of elements :- ");
    scanf ("%d",&n);

    int arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("Enter the arr[%d]:-",i);
        scanf("%d",&arr[i]);
    }

    LargeNum(arr,n);

    return 0;
}

int LargeNum(int arr[],int n)
{


{
    int max;

    max = arr[n-1];
    for (int i=n-1;i>=0;i--)
    {
        if (arr[i] >max)
        {
            max = arr[i];
            if (n==0)
            {
                return max;

            }
        }
    }
    return LargeNum(arr,n-1);

    
}
}