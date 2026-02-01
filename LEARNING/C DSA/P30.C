#include <stdio.h>
int main()

{
    int n;

    printf ("Enter the number of elements:-");
    scanf ("%d",&n);

    int arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("Enter the arr[%d]:-",i);
        scanf ("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        int t;
        int min;
        int k=i;

        min = arr[i];

        for (int j=i+1;j<n;j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                k = j;
            }
        }

        t = arr[i];
        arr[i] = arr[k];
        arr[k] = t;
    }

    for (int i=0;i<n;i++)
    {
        printf ("\t %d",arr[i]);
    }

    return 0;
}
