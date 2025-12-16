#include <stdio.h>

int Ser(int n);

int main ()

{
    int n;

    printf("Enter the value of n:-");
    scanf ("%d",&n);

    Ser(n);

    for (int i=0 ; i<n ; i++)
    {
        printf("%d \n",Ser(i));
    }

    return 0;
}

int Ser(int n)

{
    if (n==0 || n==1)
    {
        if (n==0)
            {return 0;}
        if (n==1)
            {return 1;}
    }

    return Ser(n-1)+Ser(n-2);
}
