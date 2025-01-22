// step 1 - take first char from first string
// step 2 - compare first char with first from other strings
// step 3 - if all char are the same -> save char and go to next char
//          else return ""
// do not exeed the length of the shortest string

int shortesStr(char** strs, int strsSize)
{
    if(strsSize == 0)
        return 0;
    int len = 0;
    int tmp_len = strlen(strs[0]);
    for(int i = 0; i < strsSize;i++)
    {
        len = strlen(strs[i]);
        if(len < tmp_len)
            tmp_len = len;
    }
    return tmp_len;
}

char* longestCommonPrefix(char** strs, int strsSize)
{
    if(strsSize == 0)
        return "";
    int shortestLen = shortesStr(strs, strsSize);
    char *str = NULL;
    str = malloc((shortestLen + 1)* sizeof(char));
    for(int i = 0; i < shortestLen;i++)
    {
        char c = strs[0][i];
        for(int j = 1; j < strsSize; j++)
        {
            if(c != strs[j][i])
            {
                if(str == NULL)
                {
                    free(str);
                    return "";
                }
                else
                {
                    str[i] = '\0';
                    return str;
                }
            }
        }
        str[i] = c;
    }
    str[shortestLen] = '\0';
    return str;
}

