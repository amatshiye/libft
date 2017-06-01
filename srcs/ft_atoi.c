/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 21:52:40 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/31 22:22:11 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int x;
	int o;

	x = 0;
	while (*str == 32 || *str == '\t')
		str++;
	if (*str == '-')
		o = -1;
	else
		o = 1;
	str++;
	while (*str && ft_isdigit(*str))
	{
		x = (x * 10) + (*str - '0');
		str++;
	}
	return (x * o);
}
