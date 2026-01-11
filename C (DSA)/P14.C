// Merging two unsorted arrays

#include <stdio.h>
int main ()

{
    int arr1[10],arr2[10],arr3[20];

    int n1,n2,index=0,m;

    printf ("\n Enter the number of elements in array1 :");
    scanf ("%d",&n1);

    for (int i=0;i<n1;i++)
    {
        printf ("\n arr1[%d] = ",i);
        scanf ("%d",&arr1[i]);
    }

    printf ("\n Enter the number of elements in array2 :");
    scanf ("%d",&n2);

    for (int i=0;i<n2;i++)
    {
        printf ("\n arr2[%d] = ",i);
        scanf ("%d",&arr2[i]);
    }

    m = n1 + n2;

    for (int i=0;i<n1;i++)
    {
        arr3[index] = arr1[i];
        index++;
    }

    for (int i=0;i<n2;i++)
    {
        arr3[index] = arr2[i];
        index++;
    }

    printf ("\n\n The merged array is");
    
    for (int i=0;i<m;i++)
    {
        printf ("\n arr[%d] = %d",m,arr3[i]);
    }
    
    return 0;
}