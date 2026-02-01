#include <stdio.h>

int inp_n();
void inp_arr(int n,int arr[]);
void MergeSort(int arr[],int start,int end);
void Merge(int arr[],int start,int mid,int end);
void Display(int n,int arr[]);
int main ()

{
    int n = inp_n();

    int arr[n];

    inp_arr(n,arr);

    int start = 0;
    int end = n-1;

    MergeSort(arr,start,end);

    Display(n,arr);

}

int inp_n()
{
    int n;

    printf ("Enter the number of terms:-");
    scanf ("%d",&n);

    return n;
}

void inp_arr(int n,int arr[])

{
    for (int i=0;i<n;i++)
    {
        printf ("arr[%d]:-",i);
        scanf ("%d",&arr[i]);
    }
}

void MergeSort(int arr[],int start,int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start+end)/2;

    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);

    Merge(arr,start,mid,end);
}

void Merge(int arr[],int start,int mid,int end)

{
    int temp [end-start+1];
    int i = start;
    int j = mid+1;
    int k = 0;

    while (i<=mid && j<=end)
    {
        if (arr[i] > arr[j])
        {
            temp[k++] = arr[i++];
        }

        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i<=mid)
    {
        temp[k++] = arr[i++];
    }

    while (j<=mid)
    {
        temp[k++] = arr[j++];
    }

    
}