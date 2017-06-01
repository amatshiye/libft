/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 09:42:36 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/29 17:12:42 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	x;

	str1 = (char *)s1;
	str2 = (char *)s2;
	x = 0;
	while (n > x)
	{
		if (str1[x] != str2[x])
			return (str1[x] - str2[x]);
		else
			x++;
	}
	return (0);
}
