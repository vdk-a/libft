/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:41:19 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/08 09:41:20 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}

// int main(void)
// {
//     char c;
//     char result;
//     c = 'K';
//     result = ft_tolower(c);
//     printf("%c\n", result);
//     return (0);
// }