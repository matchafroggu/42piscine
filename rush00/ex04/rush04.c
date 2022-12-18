/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apakrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:36:39 by apakrou           #+#    #+#             */
/*   Updated: 2022/11/27 20:34:00 by mickim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char lt);

void	first_line(int x)
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

void	last_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('C');
	while (i < x - 2)
	{
		i++;
		ft_putchar('B');
	}
	if (x != 1)
	{
		ft_putchar('A');
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
			first_line(x);
		}
		else if (j < y - 1)
		{
			middle_lines(x);
		}
		else if (j == y - 1)
		{
			last_line(x);
		}
		j++;
	}
}
