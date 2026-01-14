#include <stdio.h>

int EleCount();
void ScanArray (int arr[],int n);
int SmallNumber(int arr[],int n);
int LargeNumber(int arr[],int n);
void SwitchLS(int arr[],int n,int k,int l);
void DisplayArray(int arr[],int n);


int main ()
{

    int n = EleCount();
    int arr[n];
    ScanArray(arr,n);
    int k = SmallNumber(arr,n);
    int l = LargeNumber(arr,n);
    SwitchLS(arr,n,k,l);
    return 0;

}

int EleCount()

{
    int x;

    printf ("Enter number of elements:-");
    scanf ("%d",&x);

    return x;
}

void ScanArray(int arr[],int n)
{
    int i;
    for (i=0;i<n;i++)

    {
        printf ("Enter value of a[%d]:-",i);
        scanf ("%d",&arr[i]);
    }

}

int SmallNumber(int arr[],int n)
{
    int j;

    int temp = arr[0];

    for (j=0;j<n;j++)
    {
        if (arr[j] < temp )
        {
            temp = arr[j];
        }
    }

    return temp;
}

int LargeNumber (int arr[],int n)

{
    int j;

    int temp1 = arr[0];

    for (j=0;j<n;j++)
    {
        if (arr[j] > temp1 )
        {
            temp1 = arr[j];
        }
    }

    return temp1;
}


void SwitchLS(int arr[],int n,int k,int l)
{
    int i = 0;
    int j = 0;
    int temp;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (arr[i] == l && arr[j] == k)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf ("\n New array is:-\n");

    for (int k=0;k<n;k++)
    {
        printf ("a[%d]=%d\n",k,arr[k]);
    }


    }

