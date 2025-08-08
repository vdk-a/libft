/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:32:20 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/08 09:39:35 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>

unsigned int	t_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len > 0)
	{
		while (src[i] && i < len - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
// int main(void)
// {
//     char dest[20];
//     const char *src;
//     unsigned int end;

//     src = "minecraft";
//     end = ft_strlcpy(dest, src, 6);
//     printf("Copied string: %s\n", dest);
//     printf("%u\n", end);
// }