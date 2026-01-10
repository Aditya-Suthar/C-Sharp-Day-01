#include <stdio.h>

int main ()

{
    int c;
    int nspace,nother;
    int ndigit[10]; //bcz digits are 10 (0-9)

    // setting everything to null

    nspace = nother = 0;

    for (int i=0;i<10;++i)
    {
        ndigit[i] = 0;
    }

    // now taking the input and accessing each part till end

    while ((c=getchar())!= EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c-'0'];
        }

        else if (c == '\n' || c == '\t' || c == ' ')
        {
            ++nspace;
        }

        else
        {
            ++nother;
        }


    }

    // now printing the final result

    printf ("digits = ");

    for (int i=0;i<10;++i)
    {
        printf ("%d\t",ndigit[i]);
    }

    printf (",spaces:-%d,others:-%dc",nspace,nother);

    return 0;

}
