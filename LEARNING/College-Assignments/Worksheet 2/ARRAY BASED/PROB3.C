#include <stdio.h>

int main()

{
    int n;

    printf ("Enter the value of n:-");
    scanf ("%d",&n);

    int arr[n][n];

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf ("arr[%d][%d]:-",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    for (int i=0;i<n;i++)
    {
        sum1 = sum1 + arr[i][i];
        sum2 = sum2 + arr[i][n-1-i];
    } 

    printf ("Sum of diagonal [UL --> LR]:- %d\n",sum1);
    printf ("Sum of diagonal [UR --> LL]:- %d\n",sum2);

    return 0;

}