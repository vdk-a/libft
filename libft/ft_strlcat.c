/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:40:01 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/08 09:40:03 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			d_len;
	size_t			s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = d_len;
	if (d_len >= size)
	{
		return (size + s_len);
	}
	while (src[i - d_len] && i < size - 1)
	{
		dst[i] = src[i - d_len];
		i++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}

//int	main(void)
//{
//	char	dst[20];
//	char	*src;
//	size_t	size;
//	size_t	result;
//	src = "World";
//	size = 10;
//	ft_strlcat(dst, "Hello", 20);
//	result = ft_strlcat(dst, src, size);
//	printf("%s\n", dst);
//	printf("%zu\n", result);
//	return (0);
//}