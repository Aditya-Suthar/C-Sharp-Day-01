//To print numbers from 1 to n using while loop

#include <stdio.h>
int main (void)

{
    int n , i=1;

    printf ("Enter the value of n");
    scanf ("%d" ,&n);

    while (i<=n){
    printf ("%d",i);
    i++ ;
    }

getchar();
return 0;

}