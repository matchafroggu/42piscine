/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argtostr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:05:17 by mang              #+#    #+#             */
/*   Updated: 2022/12/04 19:38:14 by nhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	printboard(char *argv)
{
	char	board[6][6];
	int		j;
	int		k;

	j = 0;
	while (j < 6)
	{
		k = 0;
		while (k < 6)
		{
			board[j][k] = 'o';
			k++;
		}
		j++;
	}
	board[1][0] = argv[0];
	board[2][0] = argv[2];
	board[3][0] = argv[4];
	board[4][0] = argv[6];
	board[1][5] = argv[8];
	board[2][5] = argv[10];
	board[3][5] = argv[12];
	board[4][5] = argv[14];
	board[0][1] = argv[16];
	board[0][2] = argv[18];
	board[0][3] = argv[20];
	board[0][4] = argv[22];
	board[5][1] = argv[24];
	board[5][2] = argv[26];
	board[5][3] = argv[28];
	board[5][4] = argv[30];
	j = 0;
	while (j < 6)
	{
		write(1, "\n", 1);
		k = 0;
		while (k < 6)
		{
			write(1, &board[j][k], 1);
			k++;
		}
		j++;
	}
	write(1, "\n", 1);
}
