/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:09:49 by mang              #+#    #+#             */
/*   Updated: 2022/12/01 17:39:26 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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
	char	string[] = "aBcDe! Fg";

	printf("Before\n %s\n", string);
	*string = *ft_strupcase(string);
	printf("After\n %s\n", string);
	return (0);
}
*/
