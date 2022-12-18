/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:58:05 by mang              #+#    #+#             */
/*   Updated: 2022/11/29 17:26:21 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
/*{
	int	i;
	int n;
	int x;

	n = size - 1;
	i = 0;
	while(i < size/2)
	{
		x = tab[i];
		tab[i] = tab[n];
		tab[n] = x;
		i++;
		n--;
	}
}
*/
int	main(void)
{
	int j;
	int n;
	int	a[] = {1, 2, 3, 4, 5, 6};

	j = 0;
	n = 6;
	while (j < n)
	{
		printf("%d\n", a[j]);
		j++;
	}
	ft_rev_int_tab(&a[0], 6);
	j = 0;
	printf("new array: %d, %d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
	return (0);
}
