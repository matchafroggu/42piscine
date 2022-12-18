/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:26:53 by mang              #+#    #+#             */
/*   Updated: 2022/12/05 12:12:55 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char			dest[50] = "Send ";
	char			src[20] = "Noodles";
	unsigned int	nb;

	nb = 4;
	printf("Before\n dest: %s src: %s, n: %d\n", dest, src, nb);
	*dest = *ft_strncat(dest, src, nb);
	printf("After\n ft_strncat = %s\n", dest);
	return (0);
}
*/
