#include <stdio.h>

int main ()

{
    int n,num,arr[20];

    printf ("Enter the number of elements:-");
    scanf ("%d",&n);

    for (int i=0;i<n;i++)
    {
        printf ("Enter the value of a[%d]:-",i);
        scanf ("%d",&arr[i]);
    }

    
    printf ("Enter the number to be added:-");
    scanf ("%d",&num);

    int var = 0;

    for (int i=0;i<n;i++)
    {
        if (num<arr[i])
        {
            for (int j=n-1;j>=i;j--)
            {
                arr[j+1] = arr[j];
            }
            arr[i] = num;
            var = 1;
            break;
        }
    }

    if (var == 0)
    {
        arr[n] = num;
    }


    for (int i=0;i<n+1;i++)
    {
        printf ("The new arr[%d]:- %d\n",i,arr[i]);
    }

    return 0;
}