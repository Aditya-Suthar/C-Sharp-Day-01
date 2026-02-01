#include <stdio.h>

int GetN();
int Fun(int n);
int main()

{
    int n = GetN();
    int sum = Fun(n);
    printf("%d",sum);
    return 0;
}

int GetN()
{
    int n;
    printf ("Enter the value of n");
    scanf ("%d",&n);
    return n;
}

int Fun(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else
    {
        return n + Fun(n-1);
    }
}