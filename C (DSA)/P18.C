// to check for palindrome of element in string
#include <stdio.h>
#include <string.h>

int main ()

{
    char s1[] ;

    printf("Enter the elements inside string:-");
    scanf (" %[^\n]s",s1);

    int len = strlen(s1) ;

    for (int i=0;i<len/2;i++)
    {
        s1[i] = s1[len-i-1];
    }

    int final = 0;

    for (int i=0;i<len;i++)
    {
        if (s1[i] == s1[len-i-1])
        {
            final = 1;
        }
    
    }

    if (final == 1)
    {
        printf("Yes! It is a palindrome");
    }

    else
    {
        printf("No! It is not a palindrome");
    }

    return 0;
}

