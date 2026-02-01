#include <stdio.h>
#include <string.h>

int main ()

{
    char str[100],substr[100];

    printf ("Enter the value of string:-");
    scanf (" %[^\n]",str);

    printf ("Enter the value of substring:-");
    scanf (" %[^\n]",substr);

    int len1 = strlen(str);
    int len2 = strlen(substr);
    
    int found = 0;

    for (int i=0;i<=len1-len2;i++)
    {
        found = 0; // palindrome is not there
        int j;

        for (j=0;j<len2;j++)
        {
            if (str[i+j] != substr[j])
            {
                break;
            }

            else 
            {
                
                continue;
            }
        }

        if ( j==len2 )

            {
                found = 1;
                break;
            
            }

    }

    if (found == 1)
    {
        printf ("palindrome");
    }

    else
    {
        printf ("Not a palindrome");
    }
    

    return 0;
    
}