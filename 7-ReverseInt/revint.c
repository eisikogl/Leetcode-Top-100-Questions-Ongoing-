int reverse(int x)
{
    int tmp = 0;
    int neg = 1;
    if(x == -2147483648)
        return 0;
    if(x < 0)
    {
        x *= -1;
        neg *= -1;
    }
    long rev = x % 10;
    if(x < 10)
        return neg *(rev + x / 10);
    while(x >= 10)
    {
        if(rev * 10 > 2147483647)
            return 0;
        rev *= 10;
        x /= 10;
        rev += x % 10;
    }
    return neg * rev;
}
