#include <stdio.h>
void fun (int exp[],int coeff[],int n);

int main()

{
    int exp[20],coeff[20];
    int n,x;

    printf ("Enter the number of terms:-");
    scanf ("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf ("Enter the coeff and expo respecitvely:-");
        scanf ("%d %d",&coeff[i],&exp[i]);

    }

    printf("Polynomial is: ");
    fun(exp, coeff, n);

    return 0;
}

void fun (int exp[],int coeff[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (i>0 && coeff[i]>0)
        {
            printf ("+");
        }

        if (exp[i] == 0)
        {
            printf ("%d",coeff[i]);
        }
        else
        {
            printf ("%dx^%d",coeff[i],exp[i]);
        }
    }
}