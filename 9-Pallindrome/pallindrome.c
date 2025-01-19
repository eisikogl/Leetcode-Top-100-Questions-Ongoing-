bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    if (x >= 0 && x <= 9)
        return true;
    
    int size = 0;
    int temp = x;

    while(temp > 0)
    {
        temp /= 10;
        size++;
    }

    temp = x;
    int *pallindrome = (int*)malloc(size * sizeof(int));
    int num = 0;

    while(temp > 0)
    {
        pallindrome[num++] = temp % 10;
        temp /= 10;
    }

    for(int i = 0; i < size/2 ; i++)
    {
        if(pallindrome[i] != pallindrome[size - 1 - i])
        {
            free(pallindrome);
            return false;
        }
    }
    
    free(pallindrome);
    return true;
}