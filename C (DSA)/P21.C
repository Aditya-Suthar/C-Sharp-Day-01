#include <stdio.h>

// addition of two polynomials

int main ()

{

    // Delcaring ur polys
    int poly1[50],poly2[50],poly3[50];

    int deg1,deg2;

    printf ("Enter the highest degree in first poly:-");
    scanf ("%d",&deg1);

    printf ("Enter the highest degree in second poly:-");
    scanf ("%d",&deg2);

    for (int i=0;i<50;i++)
    {   
        poly1[i] = 0;
        poly2[i] = 0;
        poly3[i] = 0;
    }

    for (int i=0;i<=deg1;i++)
    {
        printf ("Enter the values of first poly:-");
        scanf ("%d",&poly1[i]);
    }

    for (int i=0;i<=deg2;i++)
    {
        printf ("Enter the values of second poly:-");
        scanf ("%d",&poly2[i]);
    }

    if (deg1 == deg2)
    {
        for (int i=0;i<=deg1;i++)
        {
            poly3[i] = poly1[i]+poly2[i];
        }

        for (int i=0;i<=deg1;i++)
        {
            printf("The polynomial sum is:-%d\n",poly3[i]);
        }

    }

    else if (deg1 > deg2)
    {
        int k=0;
        int i;
        for (i=0;i<deg1-deg2;i++)
        {
            poly3[i] = poly1[i];
        }

        while (i<=deg1)
        {
            poly3[i] = poly1[i]+poly2[k];
            k++;
            i++;
        }

        for (int j=0;j<=deg1;j++)
        {
            printf("The polynomial sum is:-%d\n",poly3[j]);
        }
    }

    else if (deg2 > deg1)
    {
        int k=0;
        int i;
        for (i=0;i<deg2-deg1;i++)
        {
            poly3[i] = poly2[i];
        }

        while (i<=deg2)
        {
            poly3[i] = poly2[i]+poly1[k];
            k++;
            i++;
        }

        for (int j=0;j<=deg2;j++)
        {
            printf("The polynomial sum is:-%d\n",poly3[j]);
        }
    }


    return 0;
}