/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_posi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 13:04:51 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 14:39:08 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_check_posi(char **square, int **tetra, int row, int col, int n)
{
	int		i;
//	char	**squareret;

	i = 0;
	while (i < 4)
	{
		if ((row + tetra[i][0]) < 0 || (col + tetra[i][1]) < 0
			|| (row + tetra[i][0]) >= n || (col + tetra[i][1]) >= n)
			return (0);
		else if(square[row + tetra[i][0]][col + tetra[i][1]] != '.')
			return (0);
		i++;
	}
	return (1);
}
