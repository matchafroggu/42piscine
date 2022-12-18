/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:36:39 by apakrou           #+#    #+#             */
/*   Updated: 2022/11/26 18:28:50 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char lt);

void	first_and_last_lines(int x)
{
	int	i;

	i = 0;
	ft_putchar('A');
	while (i < x - 2)
	{
		i++;
		ft_putchar('B');
	}
	if (x != 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	middle_lines(int x)
{
	int	i;

	i = 0;
	ft_putchar('B');
	while (i < x - 2)
	{
		i++;
		ft_putchar(' ');
	}
	if (x != 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	while (j <= y - 1)
	{
		if (j == 0)
		{
			first_and_last_lines(x);
		}
		else if (j < y - 1)
		{
			middle_lines(x);
		}
		else if (j == y - 1)
		{
			first_and_last_lines(x);
		}
		j++;
	}
}
