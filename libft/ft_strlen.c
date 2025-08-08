/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:49:34 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/08 09:39:40 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *word)
{
	size_t	count;

	count = 0;
	while (word[count] != '\0')
	{
		count++;
	}
	return (count);
}
