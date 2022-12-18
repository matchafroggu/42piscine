/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:22:56 by mang              #+#    #+#             */
/*   Updated: 2022/12/14 14:20:46 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	*range = arr;
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*array;
	int	size;
	int	min;
	int	max;
	int	i;

	min = 0;
	max = 10;
	printf("min: %d, max: %d\n", min, max);
	size = ft_ultimate_range(&array, min, max);
	i = 0;
	printf("size: %d\n", size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
// #include<unistd.h>
// int    main(void)
// {
//     int    *tmp = NULL;
//     int    **range = &tmp;
//     int    *ptr = NULL;
//     int    i;
//     int    n;

//     n = ft_ultimate_range(range, 'A', 'Z');
//     i = 0;
//     ptr = *range;
//     while (i < n)
//     {
//         write(1, &ptr[i], 1);
//         write(1, " ", 1);
//         i++;
//     }
//     return (0);
// }