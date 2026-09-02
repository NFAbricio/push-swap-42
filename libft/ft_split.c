/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:37:23 by casampai          #+#    #+#             */
/*   Updated: 2026/06/25 01:02:34 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *s, char c)
{
	size_t	words;
	int		i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	free_all(char **arr, size_t words_created)
{
	while (words_created-- > 0)
	{
		free(arr[words_created]);
	}
	free(arr);
}

static void	write_words(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	c_w;

	i = 0;
	c_w = 0;
	while (s[i])
	{
		j = i;
		if (s[j] && s[j] != c)
		{
			while (s[j] && s[j] != c)
				j++;
			arr[c_w] = ft_substr(s, i, (j - i));
			if (!arr[c_w])
				return (free_all(arr, c_w));
			c_w++;
			i = j;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**list;

	words = count_words((char *)s, c);
	list = malloc(sizeof(char *) * (words + 1));
	if (!list)
		return (NULL);
	write_words(list, s, c);
	list[words] = NULL;
	return (list);
}
