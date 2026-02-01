/*Write a program to print the position of the smallest number of n numbers using arrays*/

#include <stdio.h>

int main ()

{
    int n;

    printf ("Enter the value of n :-");
    scanf ("%d",&n);

    int arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("arr[%d] = ",i);
        scanf ("%d",&arr[i]);
    }

    int m = arr[0];
    int pos = 0;

    for (int i=0;i<n;i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
            pos = i;
            continue;
        }

        else 
        {
            continue;
        }

    }

    printf ("The smallest number is %d at arr[%d]",m,pos);
    return 0;
}