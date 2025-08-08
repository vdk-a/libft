/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:41:36 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/08 11:05:53 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

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
int				ft_atoi(char *str);
void			*ft_memmove(void *dest, const void *src, size_t len);
char			*strchr(const char *s, int c);
unsigned int	ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strrchr(const char *s, int c);
void			*ft_memchr(const void *src, int ch, size_t n);
char			*ft_strnstr(const char *haystack,
					const char *needle,
					size_t len);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t nmemb, size_t size);

#endif
