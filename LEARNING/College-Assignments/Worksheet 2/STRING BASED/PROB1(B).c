#include <stdio.h>
#include <string.h>

int main ()

{
    char str[100];
    int count[256];

    for (int i=0;i<256;i++)
    {
        count[i] = 0;
    }

    printf ("ENTER THE STRING:-");
    scanf (" %[^\n]",str);

    int len = strlen(str);

    for (int i=0;i<len;i++)
    {
        ++count[str[i]];
    }

    int max = 0;
    char maxChar;

    for (int i=0;i<256;i++)
    {
        if (count[i]>max)
        {
            max = count[i];
            maxChar = i;
        }
    }

    printf ("MAXIMUM OCCURENCE IS OF %c:- %d TIMES",maxChar,max);


    return 0;
}
