// Write a C program to find the length of a string using pointers only.

#include <stdio.h>
int main ()

{
    char str[50];

    printf ("Enter the value of string:-");
    scanf (" %[^\n]",str);

    char *ptr;
    ptr = &str[0];

    int count = 0;

    while (*ptr != '\0')
    {
        count ++;
        ptr++;
    }

    printf ("The length of string is:- %d",count);

    return 0;
}