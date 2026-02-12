#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

int top = -1;
char stack[MAX];   

void push(char data);
char pop();
char peek();
int isEmpty();
int precedence(char op);
void infixToPostfix(char infix[], char postfix[]);

int main()
{
    char infix[MAX];
    char postfix[MAX];

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix Expression: %s\n", postfix);

    return 0;
}


void push(char data)
{
    if (top == MAX-1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top = top +1;
    stack[top] = data;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }

    int value = stack[top];
    top = top - 1;
    return value;
}


char peek()
{
    if (top == -1)
        return -1;

    int value = stack[top];
    return value;
}

int isEmpty()
{
    return top == -1;
}


int precedence(char op)
{
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}


void infixToPostfix(char infix[], char postfix[])
{
    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        char ch = infix[i];

        if (isalnum(ch)) 
        {
            postfix[j] = ch;
            j++;
        }

        else if (ch == '(')
        {
            push(ch);
        }

        else if (ch == ')')
        {
            while (!isEmpty() && peek() != '(')
            {
                postfix[j] = pop();
                j++;
            }
            pop(); 
        }

        else
        {
            while (!isEmpty() &&
                   (precedence(peek()) > precedence(ch) ||
                   (precedence(peek()) == precedence(ch) && ch != '^')))
            {
                postfix[j] = pop();
                j++;
            }

            push(ch);
        }

        i++;
    }

    while (!isEmpty())
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
}
