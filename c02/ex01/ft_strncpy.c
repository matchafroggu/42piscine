/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:10:50 by mang              #+#    #+#             */
/*   Updated: 2022/12/01 14:21:41 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char			src[] = "WickedWings";
	char			dest[] = "ChickenTenders";
	unsigned int	n;

	n = 6;
	printf("Before\n src: %s, dest: %s\n", src, dest);
	*dest = *ft_strncpy(dest, src, n);
	printf("After copy %i\n src: %s, dest: %s\n", n, src, dest);
	return (0);
}
*/
