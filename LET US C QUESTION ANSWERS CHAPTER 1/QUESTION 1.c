 #include <stdio.h> 
int main(void) 
{   
  //The question was regarding finding the gross salary,
  // if a fixed amount is spent on the existing salary,
  
  
  int a; 
  float b;
    printf ("Enter the amount of salary :"); 
    scanf ("%d",&a);
    
    b = a-40.0/100*a-20.0/100*a;
    printf ("The Gross salary is = %f",b);
    return 0;
    
}