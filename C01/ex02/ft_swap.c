/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkurosaw <mkurosaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:47:27 by mkurosaw          #+#    #+#             */
/*   Updated: 2022/01/06 19:11:44 by mkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	sample;

	sample = *a;
	*a = *b;
	*b = sample;
}

/*
int main(void)
{
	int	a;
	int	b;

	a	=	10;
	b	=	20;

	int	*pa;
	int	*pb;

	pa	=	&a;
	pb	=	&b;

	printf("交換前：a = %d b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("交換後：a = %d b = %d\n", a, b);
	ft_swap(pa, pb);
	printf("再交換後：a = %d b = %d\n", a, b);
}
*/