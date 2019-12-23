void	ft_putchar(char c);

void	ft_print_comb(void)
{
	for (char a = '0'; a <= '7'; a++)
	{
		for (char b = a + 1; b <= '8'; b++)
		{
			for (char c = b + 1; c <= '9'; c++)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}				
			}
		}
	}
}
