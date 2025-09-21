// To print the largest number among the three input numbers

#include <stdio.h>
int main (void)

{ int a,b,c,max;
 
    printf ("Enter the values of a,b,c:-");
    scanf ("%d %d %d",&a,&b,&c);

    max = a;

    if (b>max)
    max = b;

    if (c>max)
    max = c;

    printf ("The largest number is %d",max);
    return 0;
}