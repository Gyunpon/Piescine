/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurosaw <mkurosaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:27:33 by mkurosaw          #+#    #+#             */
/*   Updated: 2022/01/05 21:14:04 by mkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(9);
	ft_is_negative(-10);
	ft_is_negative(0);
	return (0);
}

void	ft_is_negative(int n)
{
	char	plus;
	char	minus;

	plus = 'P';
	minus = 'N';
	if (n >= 0)
	{
		write(1, &plus, 1);
	}
	else
	{
		write(1, &minus, 1);
	}
}
