int	ft_strlen(char *str);
void	ft_swap(char *a, char *b);

char	*ft_strrev(char *str)
{
	char tmp;

	for (int i = 0, length = ft_strlen(str); i < length - 1 - i; i++)
	{
		ft_swap(&str[i], &str[length - 1 - i]);
	}
	return str;
}

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return i;
}

void	ft_swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}
