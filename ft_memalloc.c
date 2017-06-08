/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:26:16 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/06 15:01:57 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*newstr;
	size_t	x;

	x = 0;
	newstr = malloc(size + 1);
	{
		while (size > x)
		{
			newstr[x] = 0;
			x++;
		}
	}
	return (newstr);
}
