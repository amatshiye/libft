/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 23:59:22 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/26 08:56:44 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	x;
	char	*newstr;

	x = 0;
	newstr = (char *)malloc(sizeof(*s1) + 1);
	while (s1[x] != '\0')
	{
		newstr[x] = s1[x];
		x++;
	}
	free(newstr);
	return (newstr);
}
