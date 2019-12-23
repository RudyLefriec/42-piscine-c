void	ft_putchar(char c);
void	ft_print_tab(int *tab, int size);

void	ft_print_combn(int n)
{
	int tab[n];
	int i;
	
	tab[0] = 0;
	i = 0;
	while (tab[0] < 10 - n)
	{
		while (i < n - 1)
		{
			tab[i + 1] = tab[i] + 1;
			i++;
		}
		while (tab[i] < 10)
		{
			ft_print_tab(tab, n);
			tab[i]++;
		}
		tab[i]--;
		while (tab[i] == 10 - n + i)
		{
			i--;
		}
		tab[i]++;
	}
	if (n != 1)
	{
		ft_print_tab(tab, n);
	}
}

void	ft_print_tab(int *tab, int size)
{
	for (int i = 0; i < size; i++)
	{
		ft_putchar(tab[i] + 48);
	}
	if (tab[0] != 10 - size)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
