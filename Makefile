# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 22:09:18 by amatshiy          #+#    #+#              #
#    Updated: 2017/05/24 02:57:23 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_isalpha.c\
	srcs/ft_isascii.c\
	srcs/ft_isdigit.c\
	srcs/ft_putchar.c\
	srcs/ft_strcmp.c\
	srcs/ft_strdup.c\
	srcs/ft_strlen.c

OBJ = ft_isalpha.o\
	ft_isascii.o\
	ft_isdigit.o\
	ft_putchar.o\
	ft_strcmp.o\
	ft_strdup.o\
	ft_strlen.o

FLGS = -Wall -Werror -Wextra

c_lib:
	@gcc -c $(FLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)

lib_x:
	@ranlib $(NAME)
clean:
	@rm -Rf ft_*
