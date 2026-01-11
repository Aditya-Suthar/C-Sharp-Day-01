//merging two arrays

#include <stdio.h>

int main ()

{
    int arr1[10],arr2[10],arr3[20];
    int n1,n2;

    printf ("Enter the number of elements of first array:-");
    scanf ("%d",&n1);

    printf ("Enter the number of elements of second array:-");
    scanf ("%d",&n2);

    for (int i=0;i<n1;++i)
    {
        printf ("arr1[%d]:-",i);
        scanf ("%d",&arr1[i]);
    }

    for (int i=0;i<n2;++i)
    {
        printf ("arr2[%d]:-",i);
        scanf ("%d",&arr2[i]);
    }


    int m = n1 + n2;

    int index = 0;

    for (int i=0;i<n1;++i)
    {
        arr3[index] = arr1[i];
        index++;
    }

    for (int i=0;i<n2;++i)
    {
        arr3[index] = arr2[i];
        index++;
    }

    for (int i=0;i<m;++i)
    {
        printf ("Merged array a[%d]:- %d\n",i,arr3[i]);
    }

    return 0;



}
