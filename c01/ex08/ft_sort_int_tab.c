/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:14:43 by mang              #+#    #+#             */
/*   Updated: 2022/11/29 20:22:13 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j > 0)
	{
		j = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i++;
			}
			j++;
		}
	}
}
/*
int	main(void)
{
	int	a[] = {5, 3, 4, 2, 1};
	printf("%d, ", a[0]);
	printf("%d, ", a[1]);
	printf("%d, ", a[2]);
	printf("%d, ", a[3]);
	printf("%d\n", a[4]);
	ft_sort_int_tab(&a[0], 5);
	printf("%d, ", a[0]);
	printf("%d, ", a[1]);
	printf("%d, ", a[2]);
	printf("%d, ", a[3]);
	printf("%d\n", a[4]);
	return (0);
}*/
