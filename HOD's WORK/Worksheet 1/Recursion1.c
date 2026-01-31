#include <stdio.h>

int GetN();
int Fun(int n);
int main ()

{
    int n = GetN();

    Fun(n);

}

GetN()
{
    int n;

    printf ("Enter the value of n:-");
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
        printf("%d ",n);
        return Fun(n-1);
    }
}