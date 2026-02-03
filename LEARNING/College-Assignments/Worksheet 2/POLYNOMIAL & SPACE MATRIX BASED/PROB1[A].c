// program to evaluate the polynomial at a value of x (degree based)

#include <stdio.h>

int degree_inp();
void int_arr(int deg,int arr[]);
int x_inp();
int fun(int deg,int arr[],int x);
int pow (int a,int b);

int main ()

{

    int deg1 = degree_inp();
    int arr[deg1+1];
    int_arr(deg1,arr);
    int x = x_inp();

    int sum = fun (deg1,arr,x);

    printf ("Value of function at %d is :- %d ",x,sum);

    return 0;
}

int degree_inp()

{   
    int deg;
    printf("Enter degree here:- ");
    scanf ("%d",&deg);
    return deg;
}

void int_arr(int deg,int arr[])

{
    for (int i=0;i<=deg;i++)
    {
        printf ("x^[%d]:-",deg-i);
        scanf ("%d",&arr[i]);
    }
}

int x_inp()
{
    int x;

    printf ("Enter the value of x:-");
    scanf ("%d",&x);

    return x;
}

int pow(int a,int b)
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

int fun(int deg,int arr[],int x)
{
    int sum = 0;

    for (int i=0;i<=deg;i++)
    {
        sum = sum + arr[i]*pow(x,deg-i);
    }

    return sum;
}

