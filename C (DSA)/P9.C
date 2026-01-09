// inserting an element in array

#include <stdio.h>

int main ()

{
    int n,num,pos,arr[20];

    printf ("Enter the number of elements ");
    scanf ("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf ("Enter the a[%d]:-",i);
        scanf ("%d",&arr[i]);
    }

    printf ("Enter the element to be added");
    scanf ("%d",&num);

    printf ("Enter the position for insertion");
    scanf ("%d",&pos);

    for (int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    
    arr[pos] = num;
    n = n+1;

    printf ("Array after insertion of %d is:\n",num);

    for (int i=0;i<n;i++)
    {
        printf ("The element at a[%d]=%d\n",i,arr[i]);
    }

    return 0;

}