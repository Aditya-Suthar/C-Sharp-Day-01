#include <stdio.h>
#include <string.h>

int main ()

{
    char str[100],substr[100];
    int found = 0;

    printf("Enter the string here:");
    scanf (" %[^\n]",str);

    printf("Enter the sub string here:");
    scanf (" %[^\n]",substr);

    int len1 = strlen(str);
    int len2 = strlen(substr);

    
    int i = 0;
    int j = 0;

    for (i = 0 ; i<= len1-len2 ;i++)
    {
        for (j = 0; j<len2 ;j++)
        {
            if (str[i+j] != substr[j])
            {
                break;
            }
        }

        if (j == len2)

            {
                found = 1;
                break;
            }
        
    }
    
   if (found) 
   {
        printf("Substring Found");
   }

   else
   {
        printf("Substring Not Found");
   }

   return 0;

}