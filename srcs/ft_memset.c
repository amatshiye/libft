/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:19:28 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/28 01:31:03 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	x;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	x = 0;
	while (x < len)
	{
		ptr[x] = c;
		x++;
	}
	return (b);
}
