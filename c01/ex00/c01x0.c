/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:38:51 by mang              #+#    #+#             */
/*   Updated: 2022/11/28 16:17:27 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int	*nbr);
/*
{
	*nbr = 42;
}*/

int	main(void)
{
	int	c;
	int	*ptr;

	c = 'L';
	ptr = &c;
	*ptr = 'O';
	c = 'O';
	ft_ft(ptr);
	write(1, &c, 1);
	return (0);
}