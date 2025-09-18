//Write a c program using one-dimensional to calculate mean of numbers

#include <stdio.h>
int main ()
{
    int i,n;
    float sum=0, mean;

    printf ("Enter the values of n");
    scanf ("%d",&n);

    float a[n];
    
    printf ("Enter the values of numbers:");

    for (i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum = sum + a[i];
    }
    mean = sum/n ;
    printf ("%f",mean);
    getchar();
    return 0;
}