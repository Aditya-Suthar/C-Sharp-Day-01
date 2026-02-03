#include <stdio.h>

int inp_n();
int add(int a,int b);

int main ()

{
    int a = inp_n();
    int b = inp_n();

    int (*fp)(int,int);

    fp = &add;

    printf ("%d",fp(a,b));

    return 0;
}

int inp_n()
{
    int n;

    printf ("Enter the value :-");
    scanf ("%d",&n);

    return n;
}

int add(int a,int b)
{
    return a+b;
}