/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:00:45 by mang              #+#    #+#             */
/*   Updated: 2022/12/01 14:23:40 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Chicken";
	char	dest[] = "Tenders";

	printf("Before\n src: %s, dest: %s\n", src, dest);
	*dest = *ft_strcpy(dest, src);
	printf("After\n src: %s, dest: %s\n", src, dest);
	return (0);
}
*/
