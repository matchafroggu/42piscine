/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:03:37 by mang              #+#    #+#             */
/*   Updated: 2022/11/29 18:12:53 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);
/*{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i + '0';
	return (i);
}
*/
int	main(void)
{
	int	len;

	len = ft_strlen("moocow");
	printf("%d", len);
	return (0);
}
