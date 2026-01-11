#include <stdio.h>

int main ()

{
    int n1,n2;

    int index,first_index,second_index;

    index = first_index = second_index = 0;

    printf ("Enter the number of elements in first array");
    scanf ("%d",&n1);

    int arr1[n1];

    for (int i=0;i<n1;++i)
    {
        printf ("Enter the value of arr1[%d]:-",i);
        scanf ("%d",&arr1[i]);
    }

    printf ("Enter the number of elements in second array");
    scanf ("%d",&n2);

    int arr2[n2];

    for (int i=0;i<n2;++i)
    {
        printf ("Enter the value of arr2[%d]:-",i);
        scanf ("%d",&arr2[i]);
    }

    int arr3[n1+n2];

    while ((first_index<n1) && (second_index<n2))
    {
        if (arr1[first_index] < arr2[second_index])
        {
            arr3[index] = arr1[first_index];
            first_index++;
        }

        else
        {
            arr3[index] = arr2[second_index];
            second_index++;
        }
        
        index++;
    }

    while (second_index<n2)
    {
        {
        arr3[index] = arr2[second_index];
        second_index++;
        index++;
        }
    }

    while(first_index < n1)
    {
        {
        arr3[index] = arr1[first_index];
        first_index++;
        index++;
        }
    }


    
    for (int i=0;i<n1+n2;++i)
    {
        printf ("Final a[%d]:- %d\n",i,arr3[i]);
    }

    return 0;
}