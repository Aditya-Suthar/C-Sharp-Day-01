// Write a C program to reverse an array using pointers only.

#include <stdio.h>


int inp_n();

int inp_arr(int n,int arr[]);

int main ()

{
    int n = inp_n();

    int arr[n];

    inp_arr(n,arr);

    int *ptr1;
    int *ptr2;
    int *ptr;
    ptr = arr;

    ptr1 = &arr[0];
    ptr2 = &arr[n-1];

    while(ptr1 < ptr2)
    {
        int temp = *(ptr1);
        *(ptr1) = *(ptr2);
        *(ptr2) = temp;

        ptr1++;
        ptr2--;
    }

    for (int i=0;i<n;i++)
    {
        printf ("\t %d",*(ptr+i));
    }

    return 0;
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
