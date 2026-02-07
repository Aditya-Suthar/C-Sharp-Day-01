char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    int j = 0;

    
    while (strs[0][j] != '\0')
    {
        for (int i = 1; i < strsSize; i++)
        {
            if (strs[i][j] != strs[0][j])
            {
                strs[0][j] = '\0';
                return strs[0];
            }
        }
        j++;
    }

    return strs[0];
}
