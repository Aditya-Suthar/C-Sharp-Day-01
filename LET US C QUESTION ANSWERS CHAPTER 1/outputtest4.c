//A five digit number is entered through the keyboard.Write a program to obtain the 
//reversed the number and to determine whether the original and reversed numbers
//are equal or not.


#include <stdio.h>
#include <conio.h>
int main (void)

{int a , b , c , d , e , f , g ;

    printf ("Please enter your 5 digit number ");
    scanf ("%d" , &a );

    b = a % 10 ;
    c = ((a-b)/10) % 10 ;
    d = ((a-b-10*c)/100) %10;
    e = ((a-b-10*c-100*d)/1000) %10;
    f = ((a-b-10*c-100*d-1000*e)/10000) %10;

    g = 10000*b + 1000*c + 100*d + 10*e + f ;

    if (a==g)
        printf ("The reversed number and orignal number is same");

    else
        printf ("The reversed number and orignal number is not same ");
    
getch();
return 0;
}