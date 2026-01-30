#include <stdio.h>
char inp_st(char str[]);
int main ()

{
    char str[50];

    int len = strlen(inp_st(str));
    printf ("%d",len);


}

char inp_st(char str[])
{
    printf ("String:-");
    scanf (" %[^\n]",str);
}