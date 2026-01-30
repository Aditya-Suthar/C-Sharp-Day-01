#include <stdio.h>

int inp_height();
int main ()

{
    int n = inp_height();

    for (int i=0;i<n;i++)
    {
        for (int j=n-i-1;j>0;j--)
        {
            printf (" ");
        }

        int val = 65;

        for (int k=1;k<=2*i+1;k++)
        {

            if (val == 91)
            {
                val = 65;
            }

            printf ("%c",val);
            val = val+1;
        }

        printf ("\n");
    }

    return 0;
}

int inp_height ()
{
    int n;

    printf ("Enter the height of pyramid :-");
    scanf ("%d",&n);

    return n;
}