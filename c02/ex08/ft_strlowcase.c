/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:41:41 by mang              #+#    #+#             */
/*   Updated: 2022/12/01 17:55:01 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	string[] = "AbCdEf !@#iJ";

	printf("Before\n %s\n", string);
	*string = *ft_strlowcase(string);
	printf("After\n %s\n", string);
	return (0);
}
*/
