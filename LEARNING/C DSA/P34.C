#include <stdio.h>

int inp_n();

void inp_arr(int n,int arr[]);

void SelectSort(int n,int arr[]);

void Display(int n,int arr[]);

void MergeSort(int arr[],int start,int end);

void Merge(int arr[],int start,int mid,int end);

int main()
{
    int n = inp_n(); // Taking input of no. of elements

    int arr[n];  // Delcaring the array

    inp_arr(n,arr); // Taking input of values of array

    int start=0;
    int end = n-1;

    MergeSort(arr,start,end); //Sorting the elements

    Display(n,arr); // Displaying the final results

    return 0;
}

int inp_n()
{
    int n;

    printf ("Enter the number of elements:-");
    scanf ("%d",&n);

    return n;
}

void inp_arr(int n,int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf ("Enter arr[%d]:- ",i);
        scanf ("%d",&arr[i]);
    }
}

void MergeSort(int arr[],int start,int end)
{
    if (start<end)
    {
        int mid = (start+end)/2;

        MergeSort(arr,start,mid);
        MergeSort(arr,mid+1,end);

        Merge(arr,start,mid,end);
    }

}

void Merge(int arr[],int start,int mid,int end)
{
    int i = start; // start for first sublist
    int j = mid+1; // start for second sublist

    int k = 0;

    int temp[end-start+1]; // a new array where elements will be stored

    while (i<=mid && j<= end)
    {
        if (arr[i]<= arr[j])
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

    while (j<=end)
    {
        temp[k++] = arr[j++];
    }


    i = start;
    k=0;

    while (i<=end)
    {
        arr[i++] = temp[k++];
    }
}

void Display(int n,int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf ("\t %d",arr[i]);
    }
}

