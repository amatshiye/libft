/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 00:26:10 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/08 00:11:38 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	x;

	x = 0;
	if ((newstr = malloc(size * size)) == NULL)
		return (NULL);
	else
	{
		while (size > x)
		{
			newstr[x] = '\0';
			x++;
		}
	}
	newstr[x] = '\0';
	return (newstr);
}
