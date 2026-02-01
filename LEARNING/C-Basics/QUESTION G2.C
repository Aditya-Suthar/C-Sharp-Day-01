#include <stdio.h>

int main (void)

{
    //Writing a program to take the input from the user then reversing the number
    //Question from the book
    //Did the similar thing as done in Question F.c

    int a , b , c , d , e , f , g , h ;

    printf ("Please enter your 5 digit number for reversing");
    scanf ("%d" , &a );

    b = a % 10 ;
    c = ((a-b)/10) % 10 ;
    d = ((a-b-10*c)/100) %10;
    e = ((a-b-10*c-100*d)/1000) %10;
    f = ((a-b-10*c-100*d-1000*e)/10000) %10;

    g = 10000*b + 1000*c + 100*d + 10*e + f ;

    printf ("The reversed number is = %d" , g) ;
    return 0;

    
}