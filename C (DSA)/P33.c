#include <stdio.h>

int inp_n();

void inp_arr(int n,int arr[]);

void SelectSort(int n,int arr[]);

void Display(int n,int arr[]);

int main()
{
    int n = inp_n(); // Taking input of no. of elements

    int arr[n];  // Delcaring the array

    inp_arr(n,arr); // Taking input of values of array


    SelectSort(n,arr); //Sorting the elements

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

void SelectSort(int n,int arr[])
{
    int i,j,temp,min,pos;

    for (i=0;i<n-1;i++)
    {
        min = arr[i];
        pos = i;

        for (j=i+1;j<n;j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }

        temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
    }
}

void Display(int n,int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf ("\t %d",arr[i]);
    }
}
