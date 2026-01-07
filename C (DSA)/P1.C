#include <stdio.h>

int main ()

{
    int a,b,temp;

    printf ("Enter the value of number a");
    scanf ("%d",&a);

    printf ("Enter the value of number b");
    scanf ("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("New a and b are :- %d %d",a,b);

    return 0;

}