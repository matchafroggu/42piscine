/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:17:56 by mang              #+#    #+#             */
/*   Updated: 2022/12/12 10:30:50 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = 7;
	printf("Factorial of %d is ", a);
	a = ft_recursive_factorial(a);
	printf("%d\n", a);
	a = ft_recursive_factorial(0);
	printf("Factorial of 0 is %d\n", a);
	a = ft_recursive_factorial(1);
	printf("Factorial of 1 is %d\n", a);
	a = ft_recursive_factorial(-42);
	printf("Factorial of -42 is %d\n", a);
	return (0);
}
*/
