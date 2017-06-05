/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 02:25:13 by amatshiy          #+#    #+#             */
/*   Updated: 2017/06/05 02:44:30 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		f(&s[x]);
		x++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		void	(*f)(char);
		ft_striter(av[1], av[1]);
	}
	return (0);
}

