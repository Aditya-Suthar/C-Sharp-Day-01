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

    for (int j=0;j<256;j++)
    {
        if (count[j]>0)
        {
            printf ("%c has appeared %d times\n",j,count[j]);
        }
    }

    return 0;
}
