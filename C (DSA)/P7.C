//WAP to enter n number of digits. Form a number using digits

#include <stdio.h>
#include <math.h>
int main ()

{
    int n,arr[n],sum=0;

    printf ("Enter the n number of digits");
    scanf ("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf ("Enter the digit at position %d:-",i+1);
        scanf ("%d",&arr[i]);
    }

    
    for (int i=0;i<n;i++)
    {
        sum = sum+arr[i]*pow(10,i);
    }

    printf ("The number is : %d",sum);

    return 0;

}