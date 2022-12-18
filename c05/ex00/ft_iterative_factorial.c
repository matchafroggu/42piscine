/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:21:46 by mang              #+#    #+#             */
/*   Updated: 2022/12/12 10:27:58 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb;
	if (nb == 0)
		return (1);
	else if (x < 0)
		return (0);
	while (x > 1)
	{
		nb = nb * (x - 1);
		x--;
	}
	return (nb);
}

#include <stdio.h>

int	main(void)
{
	int	a;

	a = 7;
	printf("Factorial of %d ", a);
	a = ft_iterative_factorial(a);
	printf("is %d\n", a);
	printf("Factorial of 0 is %d\n", ft_iterative_factorial(0));
	printf("Factorial of 1 is %d\n", ft_iterative_factorial(1));
	printf("Factorial of -42 is %d\n", ft_iterative_factorial(-42));
	return (0);
}

