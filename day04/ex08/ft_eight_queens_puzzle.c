int	solver(char *str, int i, int *c);
int	is_valid(char *str, int i);

int	ft_eight_queens_puzzle(void)
{
	char plateau[] = {0, 0, 0, 0, 0, 0, 0, 0};
	int count = 0;

	solver(plateau, 0, &count);
	return count;
}

int	solver(char *str, int i, int *c)
{
	if (i == 8)
	{
		return 1;
	}
	while (str[i] < 8) 
	{
		str[i]++;
		if (is_valid(str, i))
		{
			if (solver(str, i + 1, c))
			{
				*c += 1;
			}
		}
	}
	str[i] = 0;
	return 0;
}

int	is_valid(char *str, int i)
{
	int j = 0;

	while (j < i)
	{
		if (str[i]  == str[j])
		{
			return 0;
		}
		if (str[i] == str[j] + (i - j))
		{
			return 0;
		}
		if (str[i] == str[j] - (i - j))
		{
			return 0;
		}
		j++;
	}
	return 1;
}
