//To print odd or even values within a range

#include <stdio.h>
int main (void)

{
    int n , i ;

    printf ("Enter the value of n");
    scanf ("%d",&n);

    //The n represents value till which u want odd or even values

    if (n%2==0){
    printf ("The even numers are as follows:\n");
    
    //For printing even numbers
        for (i=0;i<=n;i+=2){
        printf ("%d\n",i);
        }
    
    //For printing odd numbers
    printf ("The odd numbers are as follows:\n");
        for (i=1;i<n;i+=2){
        printf ("%d\n",i);
    }
    }
    

    else if(n%2!=0){
    printf ("The even numers are as follows:\n");
    
    // For printing even numbers
        for (i=0;i<n;i+=2){
        printf ("%d \n",i);
        }

    // For printing odd numbers 
    printf ("The odd numbers are as follows:\n");
        for (i=1;i<=n;i+=2){
        printf ("%d",i);
        }
        
    }
    getchar();
    return 0;
}