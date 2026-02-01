#include <stdio.h>

int inp_height();
int main ()

{
    int n = inp_height();

    for (int i=0;i<n;i++)
    {
        {
            int temp = i+1;

            for (int j=n-i-1;j>0;j--)
            {
                printf (" ");
            }
        
            int l=1;
            
            while (l<=temp)
            {
                printf ("%d",l);
                l = l+1;
            }

            int m=temp-1;
            if (i>0)
            {
                while (m>=1)
                {
                    printf ("%d",m);
                    m = m-1;
                }
            }
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