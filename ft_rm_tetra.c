/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_tetra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 17:38:22 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/02 19:50:07 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libfil.h"

char	**ft_rm_tetra(char **square, int **tetra, int row, int col)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		square[row + tetra[i][1]][col + tetra[i][0]] = '.';
		i++;
	}
	return (square);
}
