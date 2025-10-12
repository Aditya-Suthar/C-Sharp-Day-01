#include <stdio.h>

void MyFunction (int x,int y)
{
    int sum;
    sum = x+y;
    printf ("The sum of the numbers of is %d \n",sum);
}

int main ()
{
    MyFunction(19,3);
    MyFunction(20,25);

    return 0;
}
