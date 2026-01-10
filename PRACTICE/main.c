#include <stdio.h>
/* inserting at a given position */

int main ()

{
    int n,num,pos,arr[20];

    printf ("Enter the no. of elements (orginal) in array:-");
    scanf ("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf ("Enter arr[%d]:-");
        scanf ("%d",&arr[i])
    }

    printf ("Enter the number to be added:-");
    scanf ("%d",&num);

    printf ("Enter the pos(acc to array pos) to be added:-");
    scanf ("%d",&pos);

    for (int i=n-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos] = num;

    for (int i=0;i<=n;i++)
    {
        printf ("The new a[%d] :- %d\n",i,arr[i]);
    }

    return 0;

}
