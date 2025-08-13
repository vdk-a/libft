/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:24:33 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/13 16:00:17 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_counter(int n)
{
	size_t	nlen;

	nlen = 0;
	if (n <= 0)
	{
		nlen++;
	}
	while (n != 0)
	{
		n = n / 10;
		nlen++;
	}
	return (nlen);
}

char	*if_zero(void)
{
	char	*result;

	result = malloc(2);
	if (!result)
	{
		return (NULL);
	}
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	int		sign;

	len = number_counter(n);
	result = malloc(len + 1);
	if (n == 0)
	{
		return (if_zero());
	}
	if (n < 0)
	{
		sign = -1;
		result[0] = '-';
	}
	while (n > 0)
	{
		result[len] = n % 10;
		n = n / 10;
		len --;
	}
	result[len] = '\0';
	return (result);
}
