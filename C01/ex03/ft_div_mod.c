/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurosaw <mkurosaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:40:58 by mkurosaw          #+#    #+#             */
/*   Updated: 2022/01/06 21:50:49 by mkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main(void)
{
	int a;
	int b;
	int i;
	int j;

	a = 20;
	b = 6;

	ft_div_mod(a, b, &i, &j);

	printf("%d\n", i);
	printf("%d\n", j);
}
*/
