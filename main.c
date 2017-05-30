/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:33:09 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 15:15:17 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libfil.h"
#include <stdio.h>

int		ft_check_tetra(char *tetra);
int		ft_tetra_valid(char *file, int n);
int		ft_tetra_nb_char(char *file);

int		main(int ac, char **av)
{
	if (ac != 2 || ft_tetra_nb_char(av[1]) == 0)
		ft_putstr("error\n");
	else if (!(ft_tetra_valid(av[1], ft_tetra_nb_char(av[1]))))
		ft_putstr("error\n");
	return (0);
}
