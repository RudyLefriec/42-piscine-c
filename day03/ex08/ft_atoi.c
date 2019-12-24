int	ft_atoi(char *str)
{
	int neg = 1;
	int i = 0;

	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			neg = -1;
		}
		*str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i *= 10;
		i = i + (*str - 48);
		*str++;
	}
	return i * neg;
}
