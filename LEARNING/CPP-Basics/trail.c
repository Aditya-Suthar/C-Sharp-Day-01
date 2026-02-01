#include <stdio.h>

void fun (int a,int b,int c,int d);

int main ()

{
    int a,b,c,d;
    
    scanf ("%d %d %d %d",&a,&b,&c,&d);
    
    fun (a,b,c,d);
    return 0;
}

void fun (int a,int b,int c,int d)

{
    
    int max = a;
    
    if (b>max)
    {
        max = b;
    }
    
    if (c>max)
    
    {
        max = c;
    }
    
    if (d>max)
    
    {
        max = d;
    }
    
    else
    {
        max = a;
    }
    
    printf ("%d",max);
}
