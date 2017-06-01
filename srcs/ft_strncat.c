/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:24:38 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/26 08:58:51 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	y;
	char	*newstr;

	x = 0;
	newstr = (char *)malloc(sizeof(*s1 + *s2));
	while (s2[x] != '\0')
	{
		newstr[x] = s2[x];
		x++;
	}
	y = x;
	x = 0;
	while (n > x)
	{
		newstr[y] = s1[x];
		x++;
		y++;
	}
	newstr[y] = '\0';
	return (newstr);
}
