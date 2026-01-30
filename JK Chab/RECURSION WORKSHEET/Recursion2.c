#include <stdio.h>

int GetN(int n,int i);
int FunN();
int main ()

{
    int i = 1;
    int n = FunN();
    GetN(n,i);
    
}

int FunN()
{
    int n;
    printf ("Enter the value of n:-");
    scanf ("%d",&n);
    return n;
}

int GetN(int n,int i)
{
    if (n == 0)
    {
        return 0;
    }

    else 
    {
        printf("%d ",i);
        return GetN(n-1,i+1);
    }
}