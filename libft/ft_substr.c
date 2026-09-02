/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 15:32:57 by casampai          #+#    #+#             */
/*   Updated: 2026/06/22 17:58:40 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
	{
		substr = malloc(sizeof(char));
		if (substr == NULL)
			return (NULL);
	}
	else
	{
		if (len > ft_strlen(s) - start)
			len = ft_strlen(s) - start;
		substr = malloc((len + 1) * sizeof(char));
		if (substr == NULL)
			return (NULL);
		while (s[start] && i < len)
			substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return (substr);
}
