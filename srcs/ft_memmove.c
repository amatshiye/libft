/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 23:20:43 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/31 21:09:17 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		x;

	dest = (char *)dst;
	source = (const char *)src;
	x = 0;
	while (n > x)
	{
		dest[x] = source[x];
		x++;
	}
	return (dst);
}
