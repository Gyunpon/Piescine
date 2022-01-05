/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurosaw <mkurosaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:15:56 by mkurosaw          #+#    #+#             */
/*   Updated: 2022/01/04 19:26:33 by mkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		if (c >= '0' && c <= '9')
		{
			write(1, &c, 1);
		}
		c++;
	}	
}
