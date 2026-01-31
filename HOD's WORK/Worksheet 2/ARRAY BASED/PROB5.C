#include <stdio.h>

int main ()

{
    int n;

    printf ("Enter the number of elements:-");
    scanf ("%d",&n);

    int arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("arr[%d]:-",i);
        scanf ("%d",&arr[i]);
    }

    int temp;

    for (int i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf (" Reverse Array:- \n");
    for (int i=0;i<n;i++)
    {
        printf ("arr[%d]:-%d\n",i,arr[i]);
    }

    return 0;
}