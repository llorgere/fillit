/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 16:13:51 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/15 18:11:44 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include <stdio.h>

int		ft_check_tetra(char *tetra)
{
	int		i;
	int		l;
	int		j;
	int		la;

	i = 0;
	j = i + 4;
	l = 0;
	while (i <= 19)
	{
//		printf("test 1 du ft_check");
		while (i < j)
		{
//			printf("test 2 du ft_check");
			if (tetra[i] == '.')
				i++;
			else if (tetra[i] == '#')
			{
				la = 0;
				if (tetra[i - 1] == '#')
					la++;
				if (tetra[i + 1] == '#')
					la++;
				if (tetra[i - 5] == '#')
					la++;
				if (tetra[i + 5] == '#')
					la++;
				if (la == 0)
					return (0);
				l = l + la;
				i++;
			}
			else
				return (0);
		}
		if (tetra[i] != '\n')
			return (0);
		i++;
		j = i + 4;
	}
	if (l == 6 || l == 8)
		return (1);
	else
		return (0);
}
