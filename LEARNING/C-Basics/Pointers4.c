// Write a C program to reverse a string using pointers only.

#include <stdio.h>

int main()

{
    char str[50];

    printf ("Enter the value of string:-");
    scanf (" %[^\n]",str);

    char *ptr1;
    char *ptr2;
    char *ptr;

    ptr = str;

    ptr1 = &str[0];

    int count = 0;

    while (*ptr != '\0')
    {
        count ++;
        ptr++;
    }

    ptr2 = &str[count-1];

    while (ptr1<ptr2)
    {
        // swapping
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }


    puts(str);
    
    return 0;
}