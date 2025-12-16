//Finding means through array

#include <stdio.h>
int main (void)

{
    int i=0, n, sum=0;
    float avg;
    
    printf ("The number of inputs are:- ");
    scanf ("%d",&n);
    
    int num[n];
    
    for(i=0;i<n;i++)
    {
        printf ("Enter the value of numbers:- ");
        scanf ("%d",&num[i]);
    }
    
    for (i=0;i<n;i++)
    {   
        sum+=num[i];
    }
    
    avg=sum/n;
    
    printf ("Average is %f",avg);
    
    return 0;
}