// TO FIND SECOND LARGEST NUMBER IN THE ARRAY

#include <stdio.h>
int main ()

{
    int n,arr[20],large,second_large;

    printf ("Enter the number of elements in the array:- \n");
    scanf ("%d",&n);

    printf ("Enter the elements :-");

    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }

    large = arr[0];

    for (int i=1;i<n;i++)
    {
        if (arr[i]>arr[0])
        {
            large = arr[i];
        }
    }

    second_large = arr[1];

    for (int i=0;i<n;i++)
    {
        if (arr[i] != large)
        {
            if (arr[i] > second_large)
            {
                second_large = arr[i];
            }
        }
    }

    printf ("The largest of these numbers is : %d",large);
    printf ("The second largest number is: %d",second_large);

    return 0;

}