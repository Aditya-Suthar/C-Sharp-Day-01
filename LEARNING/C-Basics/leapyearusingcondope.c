//Write a program using conditional operators to determine whether
//a year entered through the keyboard is a leap year or not

#include <stdio.h>
#include <conio.h>

int main (void)
{
    int y;
    printf ("Type the year");
    scanf ("%d" ,&y);

    if (y%4==0)
    printf ("The year is a leap year");

    else 
    printf ("The year is not a leap year");

    getch();
    return 0;
}