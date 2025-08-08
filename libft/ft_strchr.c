/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:40:59 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/08 09:41:00 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

//int	main(void)
//{
//	const char	*s;
//	char		*result;
//	int			c;

//	s = "khaled";
//	c = 'l';
//	result = ft_strchr(s, c);
//	printf("%s\n", result);
//}
