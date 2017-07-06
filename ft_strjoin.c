/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:12:30 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/11 10:20:32 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*newstr;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	x = 0;
	newstr = (char *)malloc(sizeof(*s1) * ft_strlen((char *)s1) + 1);
	if (newstr == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		newstr[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		newstr[x] = s2[y];
		x++;
		y++;
	}
	newstr[x] = '\0';
	return (newstr);
}
