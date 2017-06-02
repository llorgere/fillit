/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtarcking_ite.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 15:45:43 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/02 17:12:41 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_backtracking_ite(char **square, int sq_s, int ***tab, int nb_tetra)
{
	int		position;
	int		i;
	int		pos_tet;

	position = 0;
	i = 0
	while (i < nb_tetra)
	{	
		row = postion / square_size;
		col = postion % square_size;
		if (ft_check_posi(square, tetra[i], pos, sq_s) == 1)
		{
			ft_put_tetra(square, tetra[i], row, col, i);
			i++;
			pos_tet = position;
			postion = 0;
		}
		else if (ft_check_posi(square, tetra[i], sq_s, pos, nb_tetra) == 0 && position != (sq_s * sq_s))
			position++;
		else if (ft_check_posi(square, tetra[i], sq_s, pos, nb_tetra) == 0 && position == (sq_s * sq_s))
		{
			i--;
			if (i == 0)
				return (-1);
			position = pos_tet;
			ft_rm_tetra(square, tetra[i], row, col);
			position++;
		}
	}
	return (1);
}
