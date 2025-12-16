//if the ages of Ram , Shyam , Ajay are input through keyboard,
//wrtie a program to determine the youngest of three.

#include <stdio.h>
#include <conio.h>
int main (void)

{
    int r , s , a ;

    printf ("Please enter the age of Ram , Shyam and Ajay respectively");
    scanf ("%d %d %d" ,&r,&s,&a);

    if ( r<s && r<a )
        printf ("Ram is youngest");
    else if ( a<r && a<s)
        printf ("Ajay is youngest");
    else if ( s<a && s<r)
        printf ("Shyam is yougnest");
    else 
    printf ("Please enter different ages");

getch ();
return 0;
}

