/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 14:43:43 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/30 17:06:36 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	ch;
	size_t			x;

	str = (char *)s;
	ch = (unsigned char)c;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == ch)
			return (str + x);
		x++;
	}
	return (NULL);
}
