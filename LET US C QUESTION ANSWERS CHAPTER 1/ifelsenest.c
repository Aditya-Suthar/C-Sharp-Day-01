#include <stdio.h>
int main (void)

{
    
char g ;
int yos , qual , sal ;

printf (" Enter Gender , Years of service and qualifications(0=G , 1=PG)");
scanf ("%c %d %d" ,&g,&yos,&qual );

if (g=='m' && yos>=10 && qual ==1)
    sal = 15000;
if (g=='m' && yos>=10 && qual ==0)
    sal = 10000;
if (g=='m' && yos<10 && qual ==1)
    sal = 10000; 
if (g=='m' && yos<10  && qual ==0)
    sal = 7000;
if (g=='f' && yos>=10 && qual ==1)
    sal = 12000;
if (g=='f' && yos>=10 && qual ==0)
    sal = 9000;
if (g=='f' && yos<10  && qual ==1)
    sal = 10000;
if (g=='f' && yos<10  && qual ==0)
    sal = 6000;

printf (" Salary of Employee = %d",sal);
return 0;

}