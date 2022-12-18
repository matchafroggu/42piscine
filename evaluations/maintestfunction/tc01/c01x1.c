/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:20:31 by mang              #+#    #+#             */
/*   Updated: 2022/11/29 16:27:59 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int	*********nbr);
/*{
		*********nbr = 42;
}
*/
int	main(void)
{
	int		c;
	int		*pc1;
	int		**pc2;
	int		***pc3;
	int		****pc4;
	int		*****pc5;
	int		******pc6;
	int		*******pc7;
	int		********pc8;
	int		*********ptr;

	pc1 = &c;
	pc2 = &pc1;
	pc3 = &pc2;
	pc4 = &pc3;
	pc5 = &pc4;
	pc6 = &pc5;
	pc7 = &pc6;
	pc8 = &pc7;
	ptr = &pc8;
	ft_ultimate_ft(ptr);
	write(1, &c, 1);
	return (0);
}
