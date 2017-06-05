/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:41:28 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/04 14:11:28 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	str2_len;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (*str2 == '\0')
		return (str2);
	str2_len = ft_strlen(s2);
	while (*str1 != '\0' && len-- >= str2_len)
		if (*str1 == *str2 && ft_memcmp(str1++, str2, str2_len) == 0)
			return (str1);
	return (NULL);
}
