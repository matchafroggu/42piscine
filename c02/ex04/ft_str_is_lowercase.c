/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:23:17 by mang              #+#    #+#             */
/*   Updated: 2022/12/01 16:36:50 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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

	output = ft_str_is_lowercase("ABCDEF");
	printf("UPPERCASE: %d\n", output);
	output = ft_str_is_lowercase("abcdef");
	printf("lowercase: %d\n", output);
	output = ft_str_is_lowercase("123456");
	printf("Numbers: %d\n", output);
}
*/
