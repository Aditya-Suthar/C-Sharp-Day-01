//Palindrome number

#include <stdio.h>
int main (void)

{
    int Num , Rem , S=0,Temp;

    printf ("Enter the number for checking");
    scanf ("%d",&Num);
    Temp = Num;
    while (Num!=0)
    {
        Rem = Num % 10;
        S = S*10 + Rem;
        Num = Num /10;
    }

    if (S==Temp)
    {
        printf("Pallindrome of number is same as orignal");
    }

    else
    {
        printf ("Pallindrome of number is not same as orignal");
    }
    
    return 0;
}