/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 20:26:41 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/31 21:08:36 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	x;
	int	y;

	y = ft_strlen(s1);
	x = 0;
	while (s1[x] != '\0')
	{
		s1[y] = s2[x];
		x++;
		y++;
	}
	s1[y] = '\0';
	return (s1);
}
