void	ft_putchar(char c);
void	ft_print_nb(long nb);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_print_nb((long)nb * -1);
	}
	else
	{
		ft_print_nb(nb);
	}
}

void	ft_print_nb(long nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_print_nb(nb / 10);
		ft_print_nb(nb % 10);
	}
}
