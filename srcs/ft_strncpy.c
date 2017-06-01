/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 15:33:56 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/26 09:00:15 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int x;

	x = 0;
	while (len > x)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (dst);
}
