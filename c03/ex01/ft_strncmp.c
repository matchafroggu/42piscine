/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:02:26 by mang              #+#    #+#             */
/*   Updated: 2022/12/04 20:48:16 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
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
	unsigned int	n = 10;
	char			str1[] = "ChickenWing";
	char			str2[] = "ChickenSalt";
	int				result;

	printf("n = %d, s1 = %s, s2 = %s\n", n, str1, str2);
	result = ft_strncmp(str1, str2, n);
	printf("Result from ft_strncmp: %d\n", result);
	result = strncmp(str1, str2, n);
	printf("Result from strncmp: %d\n", result);
	return (0);
}
*/
