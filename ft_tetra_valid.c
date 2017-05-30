/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetra_$.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 15:08:15 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 14:53:28 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#define BUFF_SIZE 21
int		ft_check_tetra(char *tetra);

int		ft_tetra_valid(char *file, int n)
{
	int		fd;
	char	buff[BUFF_SIZE + 1];
	char	**tab;
//	int		ret;
	int		i;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
//	ret = read(fd, buff, BUFF_SIZE);
	if(!(tab = (char**)malloc(sizeof(char*) * ((n - 20)/21 + 1))))
		return (0);
	i = 0;
	while (read(fd, buff, BUFF_SIZE) != 0)
	{
//		if (ret == -1)
//			return (-1);
//		printf("%d %s\n", i, buff);
		buff[21] = '\0';
		printf("le dernier character du tetra %d est [%c]\n", (i + 1), buff[20]);
		if (buff[20] == '\n' && i == (n - 20)/21)
			return (-2);
		else if (ft_check_tetra(buff) == 1)
		{
//			printf("check du ft_check");
			tab[i] = ft_strdup(buff);
			printf("le tetra %d est [%s]\n", (i + 1), tab[i]);
			i++;
		}
		else
			return (-3);	
		ft_bzero(buff, 22);
	}

	close(fd);
	return (i);
}
