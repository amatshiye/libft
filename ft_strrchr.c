/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 17:23:34 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/27 00:48:14 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	int		x;
	int		l;

	str = (char *)s;
	ch = (char)c;
	l = ft_strlen(str);
	str = (char *)malloc(sizeof(s));
	x = 0;
	while (l >= 0)
	{
		if (s[l] == ch)
			break ;
		if (l == 0)
			return (NULL);
		l--;
	}
	while (s[l] != '\0')
	{
		str[x] = s[l];
		x++;
		l++;
	}
	return (str);
}
