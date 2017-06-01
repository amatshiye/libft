/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:26:16 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/28 16:51:38 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*newstr;
	size_t	x;

	x = 0;
	if ((newstr = malloc(size)) == NULL)
		return (NULL);
	else
	{
		while (size > x)
		{
			newstr[x] = 0;
			x++;
		}
	}
	return (newstr);
}
