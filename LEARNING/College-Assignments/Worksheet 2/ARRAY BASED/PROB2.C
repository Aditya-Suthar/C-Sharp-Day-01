#include <stdio.h>

int main ()

{
    int n;

    printf ("Enter the value of n:-");
    scanf ("%d",&n);

    float arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("Enter the value of arr[%d]:-",i);
        scanf ("%f",&arr[i]);
    }

    float sum1=0; // sum of elements at even index
    float sum2=0; // sum of elements at odd index

for (int i=0;i<n;i+=2)
{
    if (n%2 == 0)
        {
            sum1 = sum1 + arr[i];
            sum2 = sum2 + arr[i+1];
        }
    else
    {
        while (i != n-1)
        {
            sum1 = sum1 + arr[i];
            sum2 = sum2 + arr[i+1];
            i+=2;
        }

        sum1 = sum1 + arr[i];
        break;
    }
}
    

    printf ("sum1 is:%f\n",sum1);
    printf ("sum2 is:%f\n",sum2);
    

    float div = sum1/sum2;

    printf ("Final answer is:- %f",div);

    return 0;

}