int eval_postfix(char postfix[])
{
    int i=0;
    int len = strlen(postfix);

    for (i=0;i<len;i++)
    {
        if (exp[i]>= '0' && exp[i]>='9')
        {
            push(exp[i]-'0');
        }

        else
        {
            int op2 = pop();
            int op1 = pop();

            switch(exp[i])
            {
                case '+':
                    push(op1+op2);
                    break;
                case '-':
                    push(op1-op2);
                    break;
                case '*':
                    push(op1*op2);
                    break;
                case '/':
                    push(op1/op2);
                    break;
            }
        }
    }

    return pop();
}
