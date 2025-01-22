int myAtoi(char* s) 
{
	int		neg;
	long	num;
	int		i;

	i = 0;
	neg = 1;
	num = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - 48);
        if(num > 2147483647)
        {
            if(neg == -1)
                return -2147483648;
            else 
                return 2147483647;
        }
		i++;
	}
	return (num * neg);
}


//step 1 parse the input
//step 2 convert string to integer