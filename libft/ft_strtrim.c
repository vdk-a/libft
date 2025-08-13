/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:31:14 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/11 15:12:04 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && find(s1[i], set))
		i++;
	return (i);
}

static size_t	end(char const *s1, char const *set, size_t len_s)
{
	size_t	j;

	if (len_s == 0)
		return (0);
	j = len_s - 1;
	while (j > 0 && find(s1[j], set))
		j--;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s;
	char	*result;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	len_s = ft_strlen(s1);
	i = start(s1, set);
	j = end(s1, set, len_s);
	if (i > j)
	{
		return (NULL);
	}
	result = malloc((j - i) + 1);
	if (!result)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		result[k++] = s1[i++];
	}
	result[k] = '\0';
	return (result);
}

//int main(void)
//{
//	char	*res;
//	res = ft_strtrim("--Hello-World--", "-");
//	printf("%s\n", res);
//}