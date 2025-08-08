/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:41:14 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/08 09:41:15 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

//int	main(void)
//{
//	const char	*s;
//	int			c;
//	const char	*result;
//	s = "khaled";
//	c = 'a';
//	result = ft_strrchr(s, c);
//	printf("%s\n", result);
//}