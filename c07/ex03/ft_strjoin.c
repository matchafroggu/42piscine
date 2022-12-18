/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:58:29 by mang              #+#    #+#             */
/*   Updated: 2022/12/14 14:19:29 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	arrlen(char **str, int size)
{
	int	i;
	int	len;
	int	sum;

	len = 0;
	i = 0;
	while (i < size)
	{
		sum = len + ft_strlen(str[i]);
		len = sum;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		a;
	int		b;
	int		i;

	join = malloc(sizeof(char) * arrlen(strs, size) + (ft_strlen(sep)
				* (size - 1)) + 1);
	if (join == NULL)
		return (NULL);
	a = 0;
	i = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
			join[i++] = strs[a][b++];
		b = 0;
		while (sep[b] != '\0' && a < size - 1)
			join[i++] = sep[b++];
		a++;
	}
	join[i] = '\0';
	return (join);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*arr[] = {"This", "is", "really", "hard."};
	char	*join;
	char	sep[] = " * ";
	int		size;
	int		i;

	size = 4;
	join = ft_strjoin(size, arr, sep);
	i = 0;
	while (join[i] != '\0')
	{
		printf("%c", join[i]);
		i++;
	}
	return (0);
}
*/
