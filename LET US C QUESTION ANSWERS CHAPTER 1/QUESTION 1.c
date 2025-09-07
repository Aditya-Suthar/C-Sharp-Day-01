 #include <stdio.h> 
int main(void) 
{ int a; 
  float b;
    printf ("Enter the amount of salary :"); 
    scanf ("%d",&a);
    
    b = a-40.0/100*a-20.0/100*a;
    printf ("The Gross salary is = %f",b);
    return 0;
    
} 