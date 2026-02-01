#include <stdio.h>

#define MAX 1000   // assuming elements range from 0 to 999

void firstNonRepeating(int arr[], int n)
{
    int freq[MAX] = {0};

    // Count frequency of each element
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Find first element with frequency 1
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
        {
            printf("First non-repeating element is: %d\n", arr[i]);
            return;
        }
    }

    printf("No non-repeating element found\n");
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    firstNonRepeating(arr, n);

    return 0;
}
