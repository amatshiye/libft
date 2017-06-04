/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 14:42:50 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/03 17:41:50 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;
	size_t	x;

	str1 = (char *)s1;
	str2 = (char *)s2;
	x = ft_strlen(s2);
	while (*str1)
		if (!ft_memcmp(str1++, str2, x))
			return (str1 - 1);
	return (0);
}
