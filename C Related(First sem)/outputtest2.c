// Any integer is input through the keyboard.Write a program to find out whether
//it is an odd number or even number.

#include <stdio.h>
#include <conio.h>
int main (void) 
{
    int a ;
    
    printf ("Enter the number");
    scanf ("%d" ,&a);

if (a%2==0)
    printf ("The number is even");
else{ 
    if (a%2!=0)
    printf ("The number is odd");
}

getch(); 
return 0;

}