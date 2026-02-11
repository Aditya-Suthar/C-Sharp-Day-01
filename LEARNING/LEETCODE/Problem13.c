#include <string.h>
int romanToInt(char* s)
{
    int len = strlen(s);
    int store[256] = {0}; 
    
    store['I'] = 1;
    store['V'] = 5;
    store['X'] = 10;
    store['L'] = 50;
    store['C'] = 100;
    store['D'] = 500;
    store['M'] = 1000;

    int sum = 0;

    for (int i=0;i<len ;i++)
    {
        if (store[s[i]]<store[s[i+1]])
        {
            sum = sum - store[s[i]];
        }

        else
        {
            sum = sum + store[s[i]];
        }
    }

    return sum;
}




    
