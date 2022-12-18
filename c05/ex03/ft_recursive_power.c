/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:59:33 by mang              #+#    #+#             */
/*   Updated: 2022/12/07 17:43:19 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	pow;

	a = 0;
	pow = 2;
	printf("%d to the power of %d is ", a, pow);
	a = ft_recursive_power(a, pow);
	printf("%d\n", a);
	return (0);
}

