//given three points (x1,y1),(x2,y2) and (x3,y3) , write a
//program to check if all the three poits fall on one straight line.


// if all the points lie on same line then area of the triangle formed by them
// MUST be zero.

#include <stdio.h>
#include <conio.h>

int main (void) 
{
    int x1,x2,x3,y1,y2,y3;
    float ar;  //ar = area of traingle

    printf ("Enter the points x1,x2,x3 and y1,y2,y3 respectively");
    scanf ("%d %d %d %d %d %d" ,&x1,&x2,&x3,&y1,&y2,&y3);
    
    ar = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
    if (ar==0)
        printf ("The points are collinear");

    else 
        printf ("The points are not collinear and the area formed by points is =%f" ,ar);

getch();
return 0;

}
