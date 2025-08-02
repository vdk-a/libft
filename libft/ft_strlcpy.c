/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:32:20 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/01 09:10:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>

unsigned int ft_strlcpy(char *dest, const char *src, size_t len)
{
    size_t i;

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
