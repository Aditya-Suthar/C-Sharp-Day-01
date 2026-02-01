#include <stdio.h>
int main ()

{
    int n;

    printf ("Enter the number of elements:\n");
    scanf ("%d",&n);

    int arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("Enter the elements of array :- ");
        scanf ("%d",&arr[i]);
    }

    int found = 0;

    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                found = 1;
                break;
            }

            else
            {
                found = 0;
            }
        }

        if (found == 1)
        {
            break;
        }

    }

    if (found == 1)
    {
        printf ("Duplicate exists");
    }

    else 
    {
        printf ("duplicate not exists");
    }
    

    return 0;
}