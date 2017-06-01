/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 01:28:05 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/26 08:59:39 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (n > x)
	{
		if (s1[x] > s2[x])
			return (s1 - s2);
		if (s1[x] < s2[x])
			return (s1 - s2);
		x++;
	}
	return (0);
}
