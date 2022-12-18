/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:42:26 by mang              #+#    #+#             */
/*   Updated: 2022/12/14 14:23:34 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	size = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	i;

	min = 0;
	max = 10;
	printf("min: %d, max: %d\n", min, max);
	arr = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%i", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
