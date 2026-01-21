// INSETION SORT

#include <stdio.h>

int GetNumber();
void GetArray(int arr[],int n);
void InserSort(int arr[],int n);
void Display(int arr[],int n);
int main ()

{
    int n;
    n = GetNumber();
    
    int arr[n];

    GetArray(arr,n);
    InserSort(arr,n);

    Display(arr,n);
    return 0;
}

int GetNumber()
{
    int n;
    printf ("Enter the number of element:-");
    scanf ("%d",&n);
    return n;
}

void GetArray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf ("Enter the element no:- [%d]",i);
        scanf ("%d",&arr[i]);
    }
}

void InserSort(int arr[],int n)
{
    int i,j,temp;

    for (i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while ( (j>=0) && (temp < arr[j]) )
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
}

void Display (int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf ("\t %d",arr[i]);
    }
}
