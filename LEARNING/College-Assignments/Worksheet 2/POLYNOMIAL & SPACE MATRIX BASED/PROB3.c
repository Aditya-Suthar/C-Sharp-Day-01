#include <stdio.h>

int main ()

{
    int n1,n2;

    printf ("Enter the number of terms in first poly:-");
    scanf ("%d",&n1);

    printf ("Enter the number of terms in second poly:-");
    scanf ("%d",&n2);

    int poly1[n1][2];
    int poly2[n2][2];
    int poly3[n1+n2][2]; // maximum terms can be n1+n2

    
    for (int i=0;i<n1;i++)
    {
        printf ("Enter the coeff and exp of first poly:-");
        scanf ("%d %d",&poly1[i][0],&poly1[i][1]);
    }

    for (int i=0;i<n2;i++)
    {
        printf ("Enter the coeff and exp of second poly:-");
        scanf ("%d %d",&poly2[i][0],&poly2[i][1]);
    }

    for (int i=0;i<n1-1;i++)
    {
        for (int j=i+1;j<n1;j++)
        {
            if (poly1[i][1] < poly1[j][1])
            {
                // swap coefficient
                int temp = poly1[i][0];
                poly1[i][0] = poly1[j][0];
                poly1[j][0] = temp;

                // swap exponent
                temp = poly1[i][1];
                poly1[i][1] = poly1[j][1];
                poly1[j][1] = temp;  
            }
        }
    }

    for (int i=0;i<n2-1;i++)
    {
        for (int j=i+1;j<n2;j++)
        {
            if (poly2[i][1] < poly2[j][1])
            {
                // swap coefficient
                int temp = poly2[i][0];
                poly2[i][0] = poly2[j][0];
                poly2[j][0] = temp;

                // swap exponent
                temp = poly2[i][1];
                poly2[i][1] = poly2[j][1];
                poly2[j][1] = temp;  
            }
        }
    }


    int i=0,j=0,k=0;

    while (i<n1 && j<n2)
    {
        if (poly1[i][1] == poly2[j][1])
        {
            poly3[k][0] = poly1[i][0] + poly2[j][0];
            poly3[k][1] = poly1[i][1];
            i++,j++,k++;
        }

        else if (poly1[i][1] < poly2[j][1])
        {
            poly3[k][0] = poly2[j][0];
            poly3[k][1] = poly2[j][1];
            k++,j++;
        }

        else 
        {
            poly3[k][0] = poly1[i][0];
            poly3[k][1] = poly1[i][1];
            k++,i++;
        }
    }

    while (i < n1)
    {
        poly3[k][0] = poly1[i][0];
        poly3[k][1] = poly1[i][1];
        k++,i++;     
    }

    while (j < n2)
    {  
        poly3[k][0] = poly2[j][0];
        poly3[k][1] = poly2[j][1];
        k++,j++;        
    }


    printf("\nResultant Polynomial: ");
for (int m = 0; m < k; m++)
{
    if (m > 0 && poly3[m][0] > 0)
        printf(" + ");

    if (poly3[m][1] == 0)
        printf("%d", poly3[m][0]);
    else
        printf("%dx^%d", poly3[m][0], poly3[m][1]);
    }
    printf("\n");
}