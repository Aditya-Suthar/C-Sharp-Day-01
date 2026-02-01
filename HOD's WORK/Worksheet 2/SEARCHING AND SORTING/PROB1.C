#include <stdio.h>

int inp_n();
void inp_arr(int n,int arr[]);
void SelectSort(int n,int arr[]);
void Display(int n,int arr[]);
int main ()

{
    int n = inp_n();

    int arr[n];

    inp_arr(n,arr);

    SelectSort(n,arr);

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

void SelectSort(int n,int arr[])
{
    int min,i,j,k,temp;

    for (i=0;i<n-1;i++)
    {
        k=i;
        min = arr[i];
        for (j=i+1;j<n;j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                k = j;
            }
        }

        // swap
        temp = arr[k];
        arr[k] = arr[i];
        arr[i] = temp;
    }
}

void Display(int n,int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf ("\t%d",arr[i]);
    }
}