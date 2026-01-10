#include <stdio.h>
// deleting an element from array
int main ()

{
    int n,pos,arr[20];

    printf ("Enter the number of elements");
    scanf ("%d",&n);

    for (int i=0;i<n;++i)
    {
        printf ("a[%d]:-",i);
        scanf ("%d",&arr[i]);
    }


    printf ("Enter its position");
    scanf ("%d",&pos);


    int temp = arr[pos];

    for (int i=pos;i<=n-2;i++)
    {
        arr[i] = arr[i+1];
    }

    for (int i=0;i<n-1;i++)
    {
        printf ("arr[%d]:-%d\n",i,arr[i]);
    }

    return 0;
}
