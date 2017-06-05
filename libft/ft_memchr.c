/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:32:53 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/05 15:18:19 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		if (*((unsigned char *)str + i) == (unsigned char)c)
			return ((void *)str + i);
		n--;
		i++;
	}
	return (0);
}
