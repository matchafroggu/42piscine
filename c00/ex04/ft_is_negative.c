/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:39:07 by mang              #+#    #+#             */
/*   Updated: 2022/11/24 17:26:41 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int		i;
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	i = n;
	if (i < 0)
	{
		write(1, &neg, sizeof(neg));
	}
	else
	{
		write(1, &pos, sizeof(pos));
	}
}
/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}*/
