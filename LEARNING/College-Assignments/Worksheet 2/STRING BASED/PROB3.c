char* strdel( char s[],char a)
{
    int len = strlen(s);
    int store = -1;

    for (int i=0;i<len;i++)
    {
        if (s[i] == a)
        {
            store = i;
            break;
        }
    }

    if (store == -1)
        {
            return s;
        }

    for (int i=store;i<len-1;i++)
    {
        s[i] = s[i+1];

    }

    return &s[0];
}
