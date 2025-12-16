// method To calculate the division of the student4///

#include <stdio.h>
int main ()

{
    int m1 , m2 , m3 , m4 , m5 , per ;

    printf ("Enter marks in five subjects") ;
    scanf ("%d %d %d %d %d" ,&m1,&m2,&m3,&m4,&m5 ) ;

    per = ((m1+m2+m3+m4+m5)/500)*100;

    if (per>=60)
        printf ("First division");

    if ((per<60) && (per>=50)) 
        printf ("Second division");

    if ((per<50) && (per>=40))
        printf ("Third divison");

    if (per<40)
        printf ("Failed"); 

return 0;
}
