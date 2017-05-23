/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:33:09 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/23 11:11:17 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
int		ft_check_tetra(char *tetra);
int		ft_tetra_valid(char *file, int n);
int		ft_tetra_nb_char(char *file);

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac == 2)
		printf("le nombre de tetra est %d\n", ft_tetra_valid(av[1], ft_tetra_nb_char(av[1])));
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
