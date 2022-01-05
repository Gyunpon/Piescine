/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurosaw <mkurosaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:46:31 by mkurosaw          #+#    #+#             */
/*   Updated: 2022/01/05 20:43:46 by mkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_result(int i, int j, int is_delimiter)
{
	if (i < j)
	{
		ft_putchar('0' + i / 10);
		ft_putchar('0' + j % 10);
		if (is_delimiter)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			if (i == 8 && j == 9)
				ft_print_result(i, j, 0);
			else
				ft_print_result(i, j, 1);
			j++;
		}
		i++;
	}
}
