/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:31:40 by mang              #+#    #+#             */
/*   Updated: 2022/11/24 17:26:01 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	num;

	i = 0;
	while (i < 10)
	{
		num = i + '0';
		write(1, &num, sizeof(num));
		i++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
