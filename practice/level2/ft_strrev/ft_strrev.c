/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:49:15 by mang              #+#    #+#             */
/*   Updated: 2022/12/15 21:49:29 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int ft_strlen(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i] != '\0')
//         i++;
//     return (i);
// }

// char    *ft_strrev(char *str)
// {
//     char    tmp;
//     int     size;
//     int     n;
//     int     i;

//     size = ft_strlen(str);
//     n = size - 1;
//     i = 0;
//     while (i < size / 2)
//     {
//         tmp = str[i];
//         str[i] = str[n];
//         str[n] = tmp;
//         i++;
//         n--;
//     }
//     return (str);
// }

char *ft_strrev(char *str)
{
	// int i;
	// int len;
	// char tmp;

	// len = 0;
	// while (str[len])
	// 	len++;
	// i = -1;
	// while (++i < --len)
	// {
	// 	tmp = str[i];
	// 	str[i] = str[len];
	// 	str[len] = tmp;
	// }
	return (str);
}

#include <stdio.h>

int main(void)
{
    char    *str;
    str = ft_strrev("Antoni");
    printf("%s\n", str);
}