/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurosaw <mkurosaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:58:07 by mkurosaw          #+#    #+#             */
/*   Updated: 2022/01/07 18:40:58 by mkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tem;

	tem = *a / *b;
	*b = *a % *b;
	*a = tem;
}

/*
int main(void) {
	int a;
	int	b;
	int z;

	a = 55;
	b = 4;

	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);
}
*/