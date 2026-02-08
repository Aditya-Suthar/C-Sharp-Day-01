#include <stdbool.h>

bool isValid(char* s)
{
    char stack[10000];   
    int top = -1;    

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[')
        {
            top = top + 1;
            stack[top] = c;
        }
        else
        {
            
            if (top == -1)
                return false;

            char last = stack[top]; 
            top = top-1;

            
            if ((c == ')' && last != '(') ||
                (c == '}' && last != '{') ||
                (c == ']' && last != '['))
                return false;
        }
    }
    return top == -1;
}
