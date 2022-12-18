/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:45:55 by mang              #+#    #+#             */
/*   Updated: 2022/12/01 16:52:32 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	output = ft_str_is_uppercase("ABCDEF");
	printf("UPPERCASE: %d\n", output);
	output = ft_str_is_uppercase("abcdef");
	printf("lowercase: %d\n", output);
	output = ft_str_is_uppercase("123456");
	printf("Numbers: %d\n", output);
}
*/
