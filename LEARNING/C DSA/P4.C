/*Write a program to find the mean of n numbers using array*/

#include <stdio.h>

int main ()

{
    int n, sum = 0;
    float mean;

    printf ("Enter the value of n :- ");
    scanf ("%d",&n);

    int arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("arr[%d] :- ",i);
        scanf ("%d",&arr[i]);
    }

    for (int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    mean = (float)sum/n;

    printf ("The sum of the array elements = %d\n",sum);
    printf ("The mean of the array elements = %.2f\n",mean);

    return 0;

}