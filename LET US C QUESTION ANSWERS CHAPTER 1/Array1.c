// Write a C program which will ask users to enter 5 numbers
// and store them in an array

#include <stdio.h>
int main (void)

{
    int i ;
    int array[5];

    printf ("Enter the values of 5 input for arrays \n");

    for (i=0;i<5;i++)
    {
        scanf ("%d" ,&array[i]);
    }
    
    printf ("Following are the values stored:\n");
    for (i=0;i<5;i++)
    {
        printf ("Elements stored in a[%d]:%d \n" ,i,array[i]);
    }

    getchar();
    return 0;
}