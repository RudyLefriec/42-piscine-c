int	solver(char *str, int i);
int	is_valid(char *str, int i);
void	ft_putchar(char c);
void	print_array(char *str);

void	ft_eight_queens_puzzle_2(void)
{
	char plateau[] = {0, 0, 0, 0, 0, 0, 0, 0};

	solver(plateau, 0);
}

int	solver(char *str, int i)
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
			if (solver(str, i + 1))
			{
				print_array(str);
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

void	print_array(char *str)
{
	for (int i = 0; i < 8; i++)
	{
		ft_putchar(str[i] + 48);
	}
	ft_putchar('\n');
}
