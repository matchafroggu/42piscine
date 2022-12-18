/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:25:14 by mang              #+#    #+#             */
/*   Updated: 2022/12/10 17:37:29 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	sqrt;
	int	num;

	num = 81;
	sqrt = ft_sqrt(num);
	printf("The square root of %d is %d.\n", num, sqrt);
	return (0);
}
*/
