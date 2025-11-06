//To print first 50 natural numbers

#include <stdio.h>

int Sum ( int n);

int main ()

{
    int n = 50;
    Sum(50);

    for (int i=1;i<n+1;i++)
    {
    printf ("%d\n",Sum(i));
    }
}

int Sum (int n)
{
    return n;
}