#include <stdio.h>

#define size 100

int partition (int a[],int beg,int end);

void quick_sort(int a[],int beg,int end);

int main()

{
    int arr[size],i,n;

    printf ("\n Enter the number of elements in the array:-");
    scanf ("%d",&n);

    printf ("\n Enter the elements of the array:-");

    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }

    quick_sort(arr,0,n-1);

    printf ("\n The sorted array is:-"\n);

    for (int i=0;i<n;i++)
    {
        printf ("%d\t",arr[i]);
    }
}

int partition (int a[],int beg,int end)
{
    int left,right,temp,loc,flag;

    loc = left = beg;
    right = end;

    flag = 0;

    
}