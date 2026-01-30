#include <stdio.h>
int main ()
{
    int n;
    
    printf ("Enter the number of elements in the array:-");
    scanf ("%d",&n);

    int arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("Enter the value of elements in the arr[%d]:-",i);
        scanf ("%d",&arr[i]);
    }

    int target;
    printf ("Enter the value of target:-");
    scanf ("%d",&target);

    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]+arr[j] == target)
            {
                printf ("%d %d",i,j);
            }
        }
    }
}