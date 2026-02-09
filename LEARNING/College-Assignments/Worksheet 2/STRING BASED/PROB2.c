char* strndel(char s[],int start,int length)
{
    int len = strlen(s);

    s[start+length] = '\0';

    int i = start;
    int k =0;

    int s1[len - length];
    while ( s[i] != '\0')
    {
        s1[k++] = s[i++];

    }
    s1[k] = '\0';

    return &s1[0];

}



