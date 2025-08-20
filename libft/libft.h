/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:41:36 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/20 15:01:50 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

size_t			ft_strlen(const char *s);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
void			ft_bzero(void *b, size_t len);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t len);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
unsigned int	ft_strlcpy(char *dest, const char *src, size_t len);
int				ft_atoi(const char *str);
void			*ft_memmove(void *dest, const void *src, size_t len);
char			*ft_strchr(const char *s, int c);
unsigned int	ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strrchr(const char *s, int c);
void			*ft_memchr(const void *src, int ch, size_t n);
char			*ft_strnstr(const char *haystack,
					const char *needle,
					size_t len);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_itoa(int n);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
