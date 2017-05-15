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

int		ft_check_tetra(char *tetra)
{
	int		i;
	int		l;

	i = 0;
	j = i + 4;
	l = 0;
	while (i <= 19)
	{
		while (i < j)
		{
			if (tetra[i] == '.')
				i++;
			else if (tetra[i] == '#')
			{
				if (tetra[i - 1] == '#')
					l++;
				if (tetra[i + 1] == '#')
					l++;
				if (tetra[i - 5] == '#')
					l++;
				if (tetra[i + 5] == '#')
					l++;
				else
					return(0);
			}
			else
				return (0);
		}
		if (tetra[i] != '$')
			return (0);
		i++;
		j = i + 4;
	}
	if (l == 6 || l == 8)
		return (1);
	else
		return (0);
}
