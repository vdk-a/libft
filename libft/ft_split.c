/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-hend <kal-hend@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:06:02 by kal-hend          #+#    #+#             */
/*   Updated: 2025/08/18 12:42:49 by kal-hend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_all(char	**array, size_t w_i)
{
	size_t	i;

	i = 0;
	while (i < w_i)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

size_t	word_counter(const char *s, char c)
{
	size_t	i;
	size_t	w_i;

	i = 0;
	w_i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			w_i++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (w_i);
}

char	**word_filler(char	**array, const char *s, char c, size_t word)
{
	size_t	i;
	size_t	w_i;
	size_t	start;

	i = 0;
	w_i = 0;
	while (s[i] && w_i < word)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		array[w_i] = ft_substr(s, start, i - start);
		if (!array[w_i])
		{
			free_all(array, w_i);
			return (NULL);
		}
		w_i++;
	}
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	word;

	if (!s)
		return (NULL);
	word = 0;
	word = word_counter(s, (unsigned char)c);
	array = malloc((word + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = word_filler(array, s, (unsigned char)c, word);
	if (array)
		array[word] = (NULL);
	return (array);
}

//int	main(void)
//{
//	char	**res;
//	size_t	i;
//	size_t	w_i;
//	res = ft_split("Hello World", ' ');
//	i = 0;
//	w_i = 0;
//	while (i < 3)
//	{
//		printf("%s\n", res[i]);
//		i++;
//	}
//	return (0);
//}