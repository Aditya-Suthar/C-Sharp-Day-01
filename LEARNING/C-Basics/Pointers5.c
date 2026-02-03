#include <stdio.h>
//Write a C program that uses a function to find the largest and smallest elements in an array using pointers.

int inp_n ();
void inp_arr(int n,int arr[]);
int large(int n,int *arr);
int small(int n,int *arr);
int main ()

{
    int n = inp_n();

    int arr[n];

    inp_arr(n,arr);

    int *x;
    x = &arr[0];

    int lar = large(n,x);
    int sma = small(n,x);

    printf ("%d\n",lar);
    printf ("%d",sma);

    return 0;
}

int inp_n()
{
    int n;

    printf ("Value of n:-");
    scanf ("%d",&n);

    return n;
}

void inp_arr(int n,int arr[])
{
    for (int i=1;i<n;i++)
    {
        printf ("arr[%d]:-",i);
        scanf ("%d",&arr[i]);
    }
}

int large(int n,int *arr)
{
    int max = *arr;

    for (int i=1;i<n;i++)
    {
        if (*(arr+i)>max)
        {
            max = *(arr+i);
        }
    }

    return max;
}

int small (int n,int *arr)

{
    int low = *arr;

    for (int i=0;i<n;i++)
    {
        if (*(arr+i)<low)
        {
            low = *(arr+i);
        }
    }

    return low;
}