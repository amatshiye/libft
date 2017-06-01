/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 00:06:39 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/26 10:10:47 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	chr;
	size_t			x;

	chr = (unsigned char)c;
	str = (char *)s;
	x = 0;
	while (n > x)
	{
		if (str[x] == chr)
			return (str + x);
		x++;
	}
	return (NULL);
}
