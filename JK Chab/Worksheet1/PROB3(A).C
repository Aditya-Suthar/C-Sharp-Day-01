// using user defined :- power ,fact

#include <stdio.h>

int inp_n();
int inp_x();
float pow (int a ,int b);
float fun (int n,int x);
float fact (int n);

int main ()

{
    int n = inp_n();
    int x = inp_x();

    float sum = fun(n,x);

    printf ("%.2f",sum);

    return 0;
}

int inp_n()
{
    int n;

    printf ("Enter the upto number of terms to be calculated:-");
    scanf ("%d",&n);

    return n;
}

int inp_x()

{
    int x;

    printf("Enter the value of x:-");
    scanf ("%d",&x);

    return x;
}

float pow (int a,int b)
// a ki power b
{
    if (b==0)
    {
        return 1;
    }

    else 
    {
        return a*pow(a,b-1);
    }
}

float fact (int n)

{
    if (n==0)
    {
        return 1;
    }

    else
    {
        return n*fact(n-1);
    }
}

float fun (int n,int x)
{
    int k =1;
    int i =0;
    float sum = 0;
    while (i+1<=n)
    {   sum = sum + pow(-1,i) * pow (x,2*k-1)/fact(2*k-1);
        k++;
        i++;
    }

    return sum;
}