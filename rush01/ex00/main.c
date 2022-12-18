/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:04:45 by mang              #+#    #+#             */
/*   Updated: 2022/12/04 19:36:36 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	printboard(char *str);

int	main(int argc, char *argv[])
{
	char	*str;

	str = argv[1];
	if (argc != 2)
	{
		write(1, "Error", 5);
	}
	else
	{
		printboard(str);
	}
}
