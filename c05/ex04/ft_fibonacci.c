/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:11:28 by mang              #+#    #+#             */
/*   Updated: 2022/12/10 14:57:43 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;
	int	result;

	i = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	while (i < index)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	index;

	index = 5;
	a = ft_fibonacci(index);
	printf("The %dth element of the Fibonacci sequence is %d\n", index, a);
	return (0);
}
*/
//0 - 0
//1 - 1
//2 - 1
//3 - 2
//4 - 3
//5 - 5
//6 - 8
//7 - 13
//8 - 21
//9 - 34
//10 - 55
