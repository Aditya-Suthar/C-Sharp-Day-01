// Calucting the area using functions

int areafun(int l,int b)

{
    int area;
    area = l*b;
    return area;
}

int main (void)
{
    int length ;
    int breadth ;
    int area;
    
    printf ("Enter the value of Length and Breadth");
    scanf ("%d %d",&length,&breadth);

    area = areafun(length,breadth);
    printf ("The area of rectangle is %d",area);

    return 0;
}