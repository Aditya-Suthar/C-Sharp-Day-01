#include <stdio.h>

int main (void)
{
    // if a five digit number is input through the keyboard,
    // writing a program to calculate the sum of its digits
int a , b , c , d , e , f , g;

    printf("Please enter the number :");
    scanf("%d" ,&a);

    //Now the mystery comes to add the digits of the number

    b = a % 10 ;
    c = ((a-b)/10) % 10 ;
    d = ((a-b-10*c)/100) %10;
    e = ((a-b-10*c-100*d)/1000) %10;
    f = ((a-b-10*c-100*d-1000*e)/10000) %10;

    // By dividing and finding single digits remainder now i can simply
    // add the following data 

    g = b + c + d + e + f;
    printf ("The sum of the digits of this 5 digit number is = %d",g);

    return 0;

    //hopes in finding a better way!
}