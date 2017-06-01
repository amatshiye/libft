/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 22:46:04 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/31 22:24:17 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	c;
	size_t	d;
	size_t	b;

	x = ft_strlen(src);
	d = ft_strlen(dst);
	y = 0;
	while (dst[y] != '\0' && size > y)
		y++;
	c = y + x;
	b = x + d - size + y - 2;
	if (size > b)
		return (0);
	else
		return (c);
	return (0);
}
