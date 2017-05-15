/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetra_$.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 15:08:15 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/15 17:03:34 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#define BUFF_SIZE 21

int		ft_tetra_valid(char *file, int n)
{
	int		fd;
	char	buff[BUFF_SIZE + 1];
	char	*tab;
	int		ret;
	int		i;

	if(!(tab = (char*)malloc(sizeof(char) * (n + 1))))
		return (0);
	i = 0;
	while (ret = read(fd, buff, BUFF_SIZE) != 0)
	{
		if (ret == -1)
			return (-1);
		else if (ft_check_tetra(buff) == 1)
			tab[i] = ft_strdup(buff);
		else
			return (error);
	}
}
