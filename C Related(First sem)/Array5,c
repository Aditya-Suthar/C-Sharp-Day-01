#include <stdio.h>
int main (void)
{
    int n,i=0;
    
    printf ("Please enter the number of students");
    scanf ("%d",&n);
    
    int a[n]; //Marks 
    int b[n]; //Roll Number 
      
    for (i=1;i<=n;i++)
    {
        printf ("Enter the roll number of child number %d :- ",i);
        scanf ("%d",&b[i-1]);
        printf ("\n");
        printf ("Enter the marks:-");
        scanf ("%d",&a[i-1]);
        printf ("\n");
    }
    
    for (i=1;i<=n;i++)
    {
    if (a[i-1]<=35)
        {
        printf ("The kid having marks less than 35 has the roll number %d",b[i-1]);
        
    printf ("\n");
        }
    
    else 
    {
     printf ("The kid having marks more than 35 has the roll number %d",b[i-1]);
    printf ("\n");
    }
    }
return 0;
}