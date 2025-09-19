#include <stdio.h>

int main() {
    int a,b,c, greatest;

    // input three numbers
    printf("enter three numbers:");
    scanf("%d %d %d",&a, &b, &c);
    //using conditional operators
    greatest = (a>b)?((a>c) ?
 a:c)   :((b>c) ? b:c);
     printf("the greatest number is:%d\n,greatest);

        return o;
}