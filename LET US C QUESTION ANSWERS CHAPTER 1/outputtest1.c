//If cost price and selling price of an item is input through the keyboard, write a program
//to determine wheter the seller has made profit or incurred loss.Also determine how much profit
//he made or loss he incurred.

#include <stdio.h>
int main (void)

{
    int sp,cp,a;

    printf("Enter the Selling price and Cost Price of object respectively");
    scanf ("%d %d" ,&sp,&cp);

    a = sp-cp ;

    if (a>0)
        printf ("This is a profit of %d" , a);
    
    else {
    if (a<0)
        printf ("This is a loss of %d", -a);
    else
        printf ("No loss nor any profit");
    }
    
    return 0;
    
}