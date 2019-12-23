void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	for (char count1 = 0; count1 <= 98; count1++)
	{
		for (char count2 = count1 + 1; count2 <= 99; count2++)
		{
			ft_putchar(count1 / 10 + 48);
			ft_putchar(count1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(count2 / 10 + 48);
			ft_putchar(count2 % 10 + 48);
			if (count1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
