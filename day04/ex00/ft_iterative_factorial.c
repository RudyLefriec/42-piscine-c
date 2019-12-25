int	ft_iterative_factorial(int nb)
{
	int f = 1;

	if (nb < 0 || nb > 12)
	{
		return 0;
	}
	while (nb > 1)
	{
		f *= nb;
		nb--;
	}
	return f;
}
