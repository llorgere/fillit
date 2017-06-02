/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking_ite.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 15:45:43 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/02 21:00:06 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libfil.h"
#include <stdio.h>

typedef struct s_type
{
	int		pos;
	int		i;
	int		pos_tet;
	int		row;
	int		col;
	int		test;
}				t_type;

int		ft_backtracking_ite(char **square, int sq_s, int ***tetra, int nb_tetra)
{
	t_type type;

	int		pos;
	int		i;
	int		pos_tet;
	int		row;
	int		col;
	int		test;

	printf("test backtrack 1\n");
	pos = 0;
	i = 0;
	while (i < nb_tetra)
	{
		printf("test backtrack 2\n");
		row = pos / sq_s;
		col = pos % sq_s;
		printf ("row est %d et col est %d et i est %d\n", row, col, i);
		if (ft_check_posi(square, tetra[i], pos, sq_s) == 1)
		{
			test = 0;
			printf("test backtrack 3\n");
			square = ft_put_tetra(square, tetra[i], row, col, i);
			while (test < 4)
			{
				printf("%s", square[test]);
				test++;
			}
			i++;
			pos_tet = pos;
			pos = 0;
			printf("test backtrack 3.5\n");
		}
		else if (ft_check_posi(square, tetra[i], pos, sq_s) == 0 && pos != (sq_s * sq_s))
		{
			printf("test backtrack 4\n");
			pos++;
		}
		else if (ft_check_posi(square, tetra[i], pos, sq_s) == 0 && pos == (sq_s * sq_s))
		{
			printf("test backtrack 5\n");
			i--;
			if (i == 0)
				return (-1);
			pos = pos_tet;
			square = ft_rm_tetra(square, tetra[i], row, col);
			pos++;
		}
	}
	return (1);
}
