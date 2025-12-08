#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[50];

    puts("Enter the string:");
    scanf(" %[^\n]", arr);   // Read complete line

    int n = strlen(arr);

    // Reverse logic using n/2 swaps
    for (int i = 0; i < n / 2; i++)
    {
        int j = n - 1 - i;       // matching index from end

        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("The reversed string is: ");
    puts(arr);

    return 0;
}
