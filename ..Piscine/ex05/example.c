#include <unistd.h>

void	ft_print_comb(void);

int main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_and_print(int i, int j, int k, int is_print_delimiter)
{
	if (i < j && j < k)
	{
		ft_putchar ('0' + i);
		ft_putchar ('0' + j);
		ft_putchar ('0' + k);

		if (is_print_delimiter)
		{
			ft_putchar (',');
			ft_putchar (' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = 1;
		while (j <= 8)
		{
			k = 2;
			while (k <= 9)
			{
				if (i == 7 && j == 8 && k == 9)
					check_and_print(i, j, k, 0);
				else
					check_and_print(i, j, k, 1);
			k++;
			}
		j++;
		}
	i++;
	}
}