/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurosaw <mkurosaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 22:52:15 by mkurosaw          #+#    #+#             */
/*   Updated: 2022/01/04 22:52:19 by mkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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

void	ft_print_result(int i, int j, int k, int is_delimiter)
{
	if (i < j && j < k)
	{
		ft_putchar('0'+ i);
		ft_putchar('0'+ j);
		ft_putchar('0'+ k);

		if (is_delimiter = 0)
		{
			ft_putchar(' ');
			ft_putchar(',');
		}
		else
		{
			return;
		}
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		j = 1;
		while (i <= 8)
		{
			k = 2;
			while (i <= 9)
			{
				if(i == 7 && j == 8 && k == 9)
					ft_print_result(i, j, k, 0);
				else
					ft_print_result(i, j, k, 1);
			k++;
			}
		j++;
		}
	i++;
	}
}
