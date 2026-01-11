// Bubble sort

#include <stdio.h>

void BubbleSort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void PrintDisplay (int arr[],int n)

{
    for (int i=0;i<n;i++)
    {
        printf ("%d\t",arr[i]);
    }
}

int main ()

{
    int n;

    printf ("Enter the value of n :-");
    scanf ("%d",&n);
    
    int arr[n];

    for (int i=0;i<n;++i)
    {
        printf ("a[%d]:-",i);
        scanf ("%d",&arr[i]);
    }

    BubbleSort(arr,n);
    PrintDisplay(arr,n);

    return 0;
}