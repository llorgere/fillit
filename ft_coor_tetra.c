/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coor_tetra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 15:26:45 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/23 19:14:48 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_row_tetra(char *tetra)
{
	int		col;
	int		row;
	int		i;
	int		j;
	char	**tab;

	printf("test0");
	if(!(tab = (char **)malloc(sizeof(char *) * 4)))
		return (NULL);
	row = 0;
	i = 0;
	j = 4;
	printf("test1");
	while (i < 19)
	{
		col = 0;
		if(!(tab[row] = (char *)malloc(sizeof(char) * 5)))
			return (NULL);
		while (i < j)
		{
			tab[row][col] = tetra[i];
			col++;
			i++;
		}
		tab[row][col] = '\0';
		row++;
		i = i + 1;
		j = i + 4;
	}
	printf("tt va bien");
	return (tab);
}

int		**ft_coor_tetra(char **tetra)
{
	int		**coor;
	int		ori[2];
	int		row;
	int		col;
	int		sq;

	sq = 0;
	row = 0;
	printf("test 1 ft_coor");
	if(!(coor = (int **)malloc(sizeof(int *) * 4)))
		return (NULL);
	if(!(coor[sq] = (int *)malloc(sizeof(int) * 2)))
		return (NULL);
	coor[0][0] = 0;
	coor[0][1] = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (sq == 0 && tetra[row][col] == '#')
			{
				ori[0] = col;
				ori[1] = row;
				sq++;
			}
			else if (tetra[row][col] == '#')
			{
				if(!(coor[sq] = (int *)malloc(sizeof(int) * 2)))
					return (NULL);
				coor[sq][0] = col - ori[0];
				coor[sq][1] = row - ori[1];
				sq++;
			}
			col++;
		}
		row++;
	}
//	coor[4]i = 69;
	return (coor);
}
