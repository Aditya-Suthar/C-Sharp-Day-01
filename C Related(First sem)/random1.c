#include <stdio.h>
int main ()

{
    char c ;

    printf ("Enter a letter of ur choice");
    scanf ("%c",&c);
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
    
        printf ("The entered letter is an vowel \n");
    break;

    default:
        printf ("The entered letter is not an vowel \n");

    return 0;
    }
}