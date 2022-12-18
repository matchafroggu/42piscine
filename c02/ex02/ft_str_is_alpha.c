/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:26:13 by mang              #+#    #+#             */
/*   Updated: 2022/12/02 15:39:41 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	alpha;

	alpha = ft_str_is_alpha("abCDefghij");
	printf("All alphabets: %d\n", alpha);
	alpha = ft_str_is_alpha("abCDef90ij");
	printf("Alphanumero: %d\n", alpha);
	alpha = ft_str_is_alpha("ab -ef90ij");
	printf("Alphasymbols: %d\n", alpha);
}
*/
