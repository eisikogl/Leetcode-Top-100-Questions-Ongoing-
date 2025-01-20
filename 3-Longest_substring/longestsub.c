int str_size(char *s)
{
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

int lengthOfLongestSubstring(char* s) 
{
    int longest_sub;
    int longest_temp = 0;
    int size = str_size(s);
    int k = 0;
 
    for(int i = 0; i < size; i++)
    {
        longest_sub = 0;
        for(int j = i; j >= k; j--)
        {
            if(s[j] == s[i] && j != i)
            {
                k = j+1;
                break;
            }
            longest_sub++;
        }
        if(longest_temp < longest_sub)
            longest_temp = longest_sub;
    }
    return longest_temp;
}