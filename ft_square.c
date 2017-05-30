/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 14:07:05 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/23 15:26:31 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_square(int	n)
{
	char	**tab;
	int		i;

	if (!(tab = (char**)malloc(sizeof(char *) * n)))
		return (0);
	i = 0;
	while (i < n)
	{
		if (!(tab[i] = (char**)malloc(sizeof(char *) * n + 2)))
			return (0);
		j = 0;
		while (j < n)
		{
			tab[i][j] = '.';
			j++;
		}
		tab[i][j] = '\n';
		j++;
		tab[i][j] = '0';
		i++;
	}
}
