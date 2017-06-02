/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_tetra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 17:38:22 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/02 17:29:33 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libfil.h"

char	**ft_rm_tetra(char **square, int **tetra, int row, int col)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		square[col + tetra[i][0]][row + tetra[0][1]] = '.';
		i++;
	}
	return (square);
}
