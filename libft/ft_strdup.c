/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 15:03:29 by casampai          #+#    #+#             */
/*   Updated: 2026/06/23 18:20:41 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*ptr_str;

	s_len = ft_strlen((char *)s);
	ptr_str = malloc(sizeof(char) * (s_len + 1));
	if (!ptr_str)
		return (NULL);
	ft_strlcpy(ptr_str, s, s_len + 1);
	return (ptr_str);
}
