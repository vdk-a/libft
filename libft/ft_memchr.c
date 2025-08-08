/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 04:59:53 by codespace         #+#    #+#             */
/*   Updated: 2025/08/06 08:08:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *src, int ch, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		c;

	i = 0;
	s = (const unsigned char *) src;
	c = (unsigned char)ch;
	while (i < n)
	{
		if (s[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	void	*res;
//	res = ft_memchr("Khaledd", 'h', 7);
//	printf("%c\n", *(char *)res);
//	printf("%s\n", (char *)res);
//}