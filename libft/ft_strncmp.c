/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:39:54 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/08 09:39:56 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
}

//int	main(void)
//{
//	int	result;
//	result = ft_strncmp("Khaled", "Khaxed", 7);
//	printf("%d\n", result);
//}