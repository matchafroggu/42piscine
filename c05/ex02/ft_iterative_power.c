/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:57:44 by mang              #+#    #+#             */
/*   Updated: 2022/12/07 15:00:34 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	x = nb;
	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * x;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	pow;

	a = 5;
	pow = 3;
	printf("%d to the power of %d is ", a, pow);
	a = ft_iterative_power(a, pow);
	printf("%d\n", a);
	return (0);
}
*/
