/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:54:39 by mang              #+#    #+#             */
/*   Updated: 2022/12/02 15:09:22 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	output;
	output = ft_str_is_printable(" aB098%$~");
	printf("Alphanumerosym: %d\n", output);
	output = ft_str_is_printable("\n aB098%$~");
	printf("Newline: %d\n", output);
	return (0);
}
*/
