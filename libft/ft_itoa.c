/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:24:33 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/20 13:39:46 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_counter(int n)
{
	size_t	nlen;

	nlen = 0;
	if (n == INT_MIN)
		return (11);
	if (n <= 0)
		nlen++;
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
		return (NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	num;

	len = number_counter(n);
	result = malloc((len + 1) * sizeof(char));
	if (n == 0)
		return (if_zero());
	num = n;
	if (num < 0)
	{
		num = -num;
		result[0] = '-';
	}
	result[len] = '\0';
	while (num > 0)
	{
		result[--len] = num % 10 + '0';
		num = num / 10;
	}
	return (result);
}
