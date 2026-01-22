#include <stdio.h>

float GetN();
float Fun(float n);
int main()

{
    float n = GetN();
    float sum = Fun(n);
    printf("%f",sum);
    return 0;
}

float GetN()
{
    float n;
    printf ("Enter the value of n");
    scanf ("%f",&n);
    return n;
}

float Fun(float n)
{
    if (n <= 0)
    {
        return 0;
    }

    else
    {
        return 1.0/n + Fun(n-1);
    }
}