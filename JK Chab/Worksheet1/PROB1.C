#include <stdio.h>

int inp_n(); // function for input of numerator
int inp_d(); // function for input of denominator
int hcf(int n,int d);
void print (int new_n,int new_d);

int main ()

{
    int n = inp_n(); // i/p numerator
    int d = inp_d(); // i/p denomiator

    int val = hcf(n,d);

    int new_n = n / val; // new numerator
    int new_d = d / val; // new denominator

    print (new_n,new_d);

    return 0;
}

int inp_n()
{
    int n;

    printf ("Enter the value of numerator:-");
    scanf ("%d",&n);

    return n;
}

int inp_d()
{
    int d;

    printf ("Enter the value of denominator:-");
    scanf ("%d",&d);

    return d;
}

int hcf(int n,int d)
{
    if (n == 0)
    {
        return d;
    }
    
    else
    {
        return hcf (d%n,n);
    }
}

void print (int new_n,int new_d)
{
    printf ("%d/%d",new_n,new_d);
}