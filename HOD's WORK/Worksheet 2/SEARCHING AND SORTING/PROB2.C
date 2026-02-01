#include <stdio.h>

int inp_n();
void inp_arr(int n,int arr[]);
void InsertSort(int n,int arr[]);
void Display(int n,int arr[]);
int main ()

{
    int n = inp_n();

    int arr[n];

    inp_arr(n,arr);

    InsertSort(n,arr);

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

void InsertSort(int n,int arr[])
{
    int i,j,temp;

    for (i=1;i<n;i++)
    {
        j = i-1;
        temp = arr[i];
        while ((j>=0) && (temp < arr[j]))
        {
           arr[j+1]  = arr[j];
           j--;
        }

    arr[j+1] = temp;     
    }
}

void Display(int n,int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf ("\t%d",arr[i]);
    }
}