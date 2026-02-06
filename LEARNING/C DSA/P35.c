#include <stdio.h>


int inp_n();
void inp_arr(int n, int arr[]);
void display(int n, int arr[]);
void quick_sort(int arr[], int low, int high);
int partition(int arr[], int low, int high);


int main()
{
    int n = inp_n();

    int arr[n];

    inp_arr(n, arr);

    quick_sort(arr, 0, n - 1); 

    printf("Sorted array:\n");
    display(n, arr);

    return 0;
}


int inp_n()
{
    int n;
    printf("Enter number of elements:- ");
    scanf("%d", &n);
    return n;
}


void inp_arr(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:- ", i);
        scanf("%d", &arr[i]);   
    }
}


void display(int n, int arr[])
{
    for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    printf("\n");
}


void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quick_sort(arr, low, p - 1);
        quick_sort(arr, p + 1, high);
    }
}


int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    while (i <= j)
    {
        while (i <= high && arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < j)
        {
            
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
