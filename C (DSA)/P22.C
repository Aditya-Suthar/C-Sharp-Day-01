int EleCount();
void ScanArray (int arr[],int n);
int SmallNumber(int arr[],int n);
void DisplayArray(int arr[],int n);


int main ()
{

    int n = EleCount();

    int arr[n];

    ScanArray(arr,n);

    int k = SmallNumber(arr,n);

    printf("%d",k);

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



