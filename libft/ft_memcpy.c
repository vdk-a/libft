/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:53:47 by kal-hend          #+#    #+#             */
/*   Updated: 2025/07/18 11:28:24 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[7];
// 	char	dest[20];
// 	size_t	len;
// 	int		i;

// 	i = 0;
// 	while (i < 6)
// 	{
// 		src	[i] = "Khaled"[i];
// 		i++;
// 	}
// 	src[i] = '\0';
// 	len = 7;
// 	ft_memcpy(dest, src, len);

// 	printf("Copied string: %s\n", dest);
// 	return (0);
// }
