# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 22:09:18 by amatshiy          #+#    #+#              #
#    Updated: 2017/07/06 09:43:32 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c\
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_memalloc.c\
	  ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
	  ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c\
	  ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c\
	  ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c\
	  ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c\
	  ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c\
	  ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strncat.c\
	  ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c\
	  ft_strrchr.c ft_tolower.c ft_toupper.c ft_strstr.c\
	  ft_striter.c ft_strnstr.c ft_striteri.c ft_strmap.c\
	  ft_strmapi.c ft_strsub.c ft_strtrim.c ft_strsplit.c\
	  ft_itoa.c get_next_line.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -Rf $(OBJ)

fclean: clean
	rm -Rf $(NAME)

re: fclean all
