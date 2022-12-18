/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:51:18 by mang              #+#    #+#             */
/*   Updated: 2022/11/29 16:43:34 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a div b = %d; a mod b = %d\n", a, b);
	return (0);
}*/
