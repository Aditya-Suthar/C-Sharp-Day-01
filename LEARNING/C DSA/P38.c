// postfix evaluation (for single digits)

#include <stdio.h>
#include <ctype.h>

#define MAX 1000

int stack[MAX];
int top = -1;


void push(int data) ;
int pop() ;
void inp_arr(char arr[]);

int main ()
{
    char arr[MAX];
    inp_arr(arr);

    for (int i=0;arr[i] != '\0';i++)   
    {
        if (isdigit(arr[i])) // for checking if the input is 0-9 in the string
        {
            push(arr[i]-'0'); // pushing the value in stack
        }

        else
        {
            int val2 = pop();
            int val1 = pop();

            int result;

            switch (arr[i])
            {
                case '+':
                    result = val1 + val2;
                    break;
            
                case '*':
                    result = val1 * val2;
                    break;

                case '-':
                    result = val1 - val2;
                    break;

                case '/':
                    result = val1 / val2;
                    break;
            }
            
            push(result);
        }
    }

    printf ("The final results is :- %d",pop());


    return 0;
}

void inp_arr(char arr[])
{

    printf ("Enter the value of string");
    scanf("%s",arr); 

}


void push(int data)
{

    if (top == MAX-1)
    {
        printf ("INVALID");
        return ;
    }

    top = top+1;
    stack[top] = data;

}

int pop()
{
    if (top == -1)
    {
        return -1;
    }
    int value;
    value = stack[top];
    top = top-1;
    return value;
}
