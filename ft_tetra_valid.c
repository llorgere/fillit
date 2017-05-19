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
int		ft_check_tetra(char *tetra);

int		ft_tetra_valid(char *file, int n)
{
	int		fd;
	char	buff[BUFF_SIZE + 1];
	char	**tab;
	int		ret;
	int		i;

	fd = open(file, O_RDONLY);
	ret = read(fd, buff, BUFF_SIZE);
	if(!(tab = (char**)malloc(sizeof(char*) * ((n - 20)/21 + 1))))
		return (0);
	i = 0;
	while ((ret == read(fd, buff, BUFF_SIZE)) != 0)
	{
		if (ret == -1)
			return (-1);
		buff[ret] = '\0';
		if (buff[20] != '\n' && i != (n - 20)/21)
			return (-2);
		else if (ft_check_tetra(buff) == 1)
		{
			tab[i] = ft_strdup(buff);
			i++;
		}
		else
			return (-3);
	}
	close(fd);
	return (i);
}
