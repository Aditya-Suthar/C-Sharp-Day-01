#include <stdio.h>

int inp_deg();

void inp_array(int arr[],int deg);

int inp_Horner();

int Horner(int arr[],int deg,int x);

void Display(int res);

int main ()
{
    int deg = inp_deg();

    int arr[deg+1];

    inp_array(arr,deg);

    int x = inp_Horner();

    int res = Horner(arr,deg,x);

    Display(res);
}

int inp_deg()
{
    int n;
    printf ("Enter the degree:-");
    scanf ("%d",&n);
    return n;
}

void inp_array(int arr[],int deg)
{
    for (int i=0;i<=deg;i++)
    {
        printf ("Enter the value (x^%d):-",deg-i);
        scanf ("%d",&arr[i]);
    }
}

int inp_Horner()
{
    int a;
    printf ("Enter the point x0:-");
    scanf ("%d",&a);
    return a;
}

int Horner(int arr[],int deg,int x)
{
    if (deg == 0)
    {
        return arr[0];
    }

    else
    {
        return arr[deg] + x*(Horner(arr,deg-1,x));
    }
}


void Display(int res)
{
    printf ("Value is:- %d",res);
}
