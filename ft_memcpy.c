/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:56:16 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/03 10:40:17 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		x;
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	x = 0;
	while (source[x] != '\0' && n > x)
	{
		dest[x] = source[x];
		x++;
	}
	dest[x] = '\0';
	return (dst);
}
