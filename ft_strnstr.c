/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:41:28 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/03 22:34:15 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	x;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (*str2 == '\0')
		return (str2);
	x = ft_strlen(s2);
	while (*str1 != '\0' && len-- >= x)
	{
		if (*str1 == *str2 && ft_memcmp(str1, str2, x) == 0)
			return (str1);
		str1++;
	}
	return (NULL);
}
