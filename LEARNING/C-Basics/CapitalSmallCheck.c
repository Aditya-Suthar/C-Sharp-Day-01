//check wheter the input character is capital letter or not

#include <stdio.h>

int main (void)
{
    char c ;

    printf ("Enter the letter for the check");
    scanf ("%c" ,&c);

    if (c>='A' && c<='Z')
    printf ("The character is in capital letter");

    else
    printf ("The character is not in capital letter");

getchar();
return 0;
}