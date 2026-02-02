// Write a C program to find the largest element in an array using pointers only.

#include <stdio.h>


int inp_n();

int inp_arr(int n,int arr[]);

int main ()

{
    int n = inp_n();

    int arr[n];

    inp_arr(n,arr);

    int *ptr;
    ptr = &arr[0];

    int max = *ptr;

    for (int i=1;i<n;i++)
    {
        if (*(ptr+i)>max)
        {
            max = *(ptr+i);
        }
    }

    printf ("The max value is :- %d",max);
}

int inp_n()
{
    int n;

    printf ("Enter the value of n");
    scanf ("%d",&n);

    return n;
}

int inp_arr(int n,int arr[])
{

    for (int i = 0; i < n; i++)
    {
        printf ("arr[%d]",i);
        scanf ("%d",&arr[i]);
    }
    
}
