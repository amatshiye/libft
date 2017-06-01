/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:57:43 by amatshiy          #+#    #+#             */
/*   Updated: 2017/05/30 11:06:33 by amatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int			ft_atoi(const char *str);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_strlen(const char *s);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strlen(const char *s);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_putstr(const char *s);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(const char *s);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
//static void	ft_putendl(char const	*s);
//static void	ft_putendl_fd(char const *s, int fd);
char		*ft_strchr(const char *s, int c);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strchr(const char *s, int c);
char		ft_strclr(char *s);
char		*ft_strcpy(char *dst, const char *str);
char		*ft_strdup(const char *s1);
char		*ft_strncat(char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strrchr(const char *s, int c);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

#endif
