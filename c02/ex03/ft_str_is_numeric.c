/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:04:22 by mang              #+#    #+#             */
/*   Updated: 2022/12/01 16:16:12 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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

	output = ft_str_is_numeric("abCDefGhi");
	printf("All alphabets: %d\n", output);
	output = ft_str_is_numeric("abCD12Ghi");
	printf("Alphanumero: %d\n", output);
	output = ft_str_is_numeric("0123456789");
	printf("Numbers: %d\n", output);
	output = ft_str_is_numeric("--!@#$%@%^");
	printf("Symbols: %d\n", output);
	return (0);
}
*/
