// program to multiply two matrices

#include <stdio.h>

int main ()

{
    int m , n , p , q ;
    
    printf ("Enter the number of rows and columns of first matrix respecitvely\n");
    scanf ("%d %d",&p,&q);
    
    printf ("Enter the number of rows and columns of second matrix respectively\n");
    scanf ("%d %d",&m,&n);
    
    int a[p][q]; //First matrix in form of array
    int b[m][n]; //Second matrix in form of array
    int c[p][n]; //Final multiplying of array
    
    if (q!=m)
    {
        printf ("Cant multiply");
        return 0;
    }
    
    else{
    
    for (int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf ("Enter the element of first matrix a[%d][%d]= ",i+1,j+1);
            scanf ("%d",&a[i][j]);
        }
    }
        
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf ("Enter the element second matrix b[%d][%d]= ",i+1,j+1);
            scanf ("%d",&b[i][j]);
        }
    }
        
    for (int i=0;i<p;i++)
        {
            for (int j=0;j<n;j++)
            {
                int sum = 0;
                for (int k=0;k<q;k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum ;
            }
        }
    
    
   for (int i=0;i<p;i++)
        {
            for (int j=0;j<n;j++)
            {
                printf (" %d",c[i][j]);
            }
            printf ("\n");
        }
    }
    
return 0;
}