#include <stdio.h>
int power (int a,int b);
int fun (int exp[],int coeff[],int n,int x);

int main()

{
    int exp[20],coeff[20];
    int n,x;

    printf ("Enter the number of terms:-");
    scanf ("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf ("Enter the coeff and expo respecitvely:-");
        scanf ("%d %d",&coeff[i],&exp[i]);

    }

    printf ("Enter the value of x:-");
    scanf ("%d",&x);

    printf ("Value of function at x is:-%d",fun(exp,coeff,n,x));

    return 0;
}

int power (int a,int b)
{
    if (b==0)
    {
        return 1;
    }

    else
    {
        return a*power(a,b-1);
    }
}

int fun (int exp[],int coeff[],int n,int x)
{
    int value = 0;

    for(int i=0;i<n;i++)
    {
        value = value + coeff[i] * power(x,exp[i]);
    }

    return value;
}