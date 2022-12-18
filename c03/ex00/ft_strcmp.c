/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:13:43 by mang              #+#    #+#             */
/*   Updated: 2022/12/04 20:51:25 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] - s2[i] == 0)
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "ChickenWing";
	char	str2[] = "ChickenButt";
	int		result;

	printf("s1 = %s\ns2 = %s\n", str1, str2);
	result = ft_strcmp(str1, str2);
	printf("Result = %d\n", result);
	result = strcmp(str1, str2);
	printf("Result = %d\n", result);
	return (0);
}
*/
