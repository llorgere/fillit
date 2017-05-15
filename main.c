/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:33:09 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/15 15:03:45 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		ft_tetra_nb_char(char *file);

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac == 2)
		ft_tetra_nb_char(av[1]);
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
