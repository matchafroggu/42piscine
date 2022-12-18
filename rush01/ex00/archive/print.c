/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:46:51 by mang              #+#    #+#             */
/*   Updated: 2022/12/04 17:04:59 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//void	putchar(char c)
//{
//	write(1, &c, 1);
//}

void	printboard(char *argv)
{
	char	board[6][6];
	int i;
	int j;

	board[1][0] = argv[1][0];
	board[2][0] = argv[1][2];
	board[3][0] = argv[1][4];
	board[4][0] = argv[1][6];
	board[1][5] = argv[1][8];
	board[2][5] = argv[1][10];
	board[3][5] = argv[1][12];
	board[4][5] = argv[1][14];
	board[0][1] = argv[1][16];
	board[0][2] = argv[1][18];
	board[0][3] = argv[1][20];
	board[0][4] = argv[1][22];
	board[5][1] = argv[1][24];
	board[5][2] = argv[1][26];
	board[5][3] = argv[1][28];
	board[5][4] = argv[1][30];

	i = 0;
	j = 0;
	for (i = 0; i < 6; i++) 
	{
 	 for (j = 0; j < 6; j++) {
    	printf("%c", board[i][j]);
  	}
	 printf("\n");
	} 
}
