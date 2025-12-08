
#include <stdio.h>

int main() {
    
    int n;
    
    printf ("Enter the value of n");
    scanf ("%d",&n);
    
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n-i+1;j++)
        {
            int num = 65;
            printf ("%c",num+j-1);
        }
    
    for (int s=1;s<=2*(i-1);s++)
        {
            printf (" ");
        }
    
    for (int j = n-i+1;j>=1;j--)
        {
            int num = 65;
            printf ("%c",num+j-1);
        }
    printf ("\n");
    }
    return 0;
}
