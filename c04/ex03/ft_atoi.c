/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:36:35 by mang              #+#    #+#             */
/*   Updated: 2022/12/06 17:14:11 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb *= sign;
	return (nb);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	output;
	char	str[] = "  ---+--+1234ab567";
	// char	str[] = "  --+--+1234ab567";
	// char	str[] = "  -23--+- -+1234ab567";

	output = ft_atoi(str);
	printf("ft_atoi: %s is %d\n", str, output);
	output = atoi(str);
	printf("atoi: %s is %d\n", str, output);
	return(0);
}
