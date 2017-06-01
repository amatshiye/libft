/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 02:14:27 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/27 02:34:43 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*dest;
	const char		*source;
	unsigned char	ch;
	size_t			x;

	dest = (char *)dst;
	source = (const char *)src;
	ch = (unsigned char)c;
	x = 0;
	while (ch != source[x] && n > x)
	{
		if (source[x] == ch)
			break ;
		else
			dest[x] = source[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
