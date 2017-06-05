/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 08:08:40 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/03 10:42:23 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	size_t x;

	x = 0;
	while (s[x])
	{
		write(1, &s[x], 1);
		x++;
	}
	write(1, "\n", 1);
}