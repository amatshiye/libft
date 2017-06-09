/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:41:28 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/09 21:39:40 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int x;
	size_t needle_len;

	if (0 == (needle_len = strnlen(s2, len)))
		return (char *)s1;

	x = 0;
	while (x <= (int)(len - needle_len))
	{
		if ((s1[0] == s2[0]) &&
				(0 == strncmp(s1, s2, needle_len)))
			return (char *)s1;
		x++;
		s1++;
	}
	return NULL;
}
