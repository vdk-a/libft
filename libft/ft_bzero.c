/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:25:03 by kal-hend          #+#    #+#             */
/*   Updated: 2025/07/18 10:35:33 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
}
