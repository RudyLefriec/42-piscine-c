int	ft_iterative_power(int nb, int power)
{
	int p = 1;

	if (power < 0)
	{
		return 0;
	}
	while (power)
	{
		p *= nb;
		power--;
	}
	return p;
}
