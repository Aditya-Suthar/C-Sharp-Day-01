//Write a C program using for loop
//to take temperature (as an input from user) of
//two cities of a week, store it in an array, and
//display it.

#include <stdio.h>
int main ()

{ 
int Day = 2;
int Week  = 7;
int i , j ;
int temperature[Day][Week];


for (i=0;i<2;i++)
{   
    for (j=0;j<7;j++)
    {
    printf ("Enter the temperature value of city-%d and day-%d\n",i+1,j+1);
    scanf ("%d",&temperature[i][j]);
    }
}

printf ("The temperature stored is:\n");

for (i=0;i<2;i++)
{
    for (j=0;j<7;j++){
    printf ("City %d,Day %d :- %d\n",i+1,j+1,temperature[i][j]);
    }
}
return 0;
}