/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_tetra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 12:10:57 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/15 16:33:56 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#define BUFF_SIZE 1
int		ft_tetra_nb_char(char *file)
{
	int		fd;
	char	buff[546];
	int		ret;
	int		n;

	n = 20;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return ;
	ret = 0;
	while (read(fd, buff, BUFF_SIZE) != 0)
		ret++;
	ft_putnbr(ret);
	while (n < ret && n < 545)
		n = n + 21;
	if (n == ret)
	{
		ft_putstr("valid number of character");
		return (n);
	}
	else
	{
		ft_putstr("invalid number of character");
		return (0);
	}
	close(fd);
}
