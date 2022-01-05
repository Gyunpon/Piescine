/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurosaw <mkurosaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:25:29 by mkurosaw          #+#    #+#             */
/*   Updated: 2022/01/04 19:11:53 by mkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		if (c >= 'a' && c <= 'z')
		{
			write(1, &c, 1);
		}
		c++;
	}
}
