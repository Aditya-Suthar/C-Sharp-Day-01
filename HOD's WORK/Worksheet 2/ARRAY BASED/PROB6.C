#include <stdio.h>

int main ()

{
    int n;

    printf ("Enter the value of n:-");
    scanf ("%d",&n);

    int ori_arr[n];

    for (int i=0;i<n;i++)
    {
        printf ("arr[%d]:-",i);
        scanf ("%d",&ori_arr[i]);
    }

    int max = ori_arr[n-1];
    int num = max - n ;
    int cpy_arr[num];
    int l = 0;

    for (int i=0;i<n-1;i++)
    {
        int k = ori_arr[i];
        {
            while (k+1!= ori_arr[i+1])
            {
                k = k+1;
                cpy_arr[l++] = k;
            }
        }
    }

    for (int i=0;i<l;i++)
    {
        printf ("%d\n",cpy_arr[i]);
    }
    return 0;
    
}