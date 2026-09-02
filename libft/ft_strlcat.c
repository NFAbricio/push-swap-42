/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:22:05 by casampai          #+#    #+#             */
/*   Updated: 2026/06/22 17:36:05 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	dst_initial_len;

	i = 0;
	j = 0;
	dst_initial_len = ft_strlen(dst);
	if (size == 0 || size <= dst_initial_len)
		return (size + ft_strlen(src));
	while (dst[i])
		i++;
	while (src[j] && i < (int)size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_initial_len + ft_strlen(src));
}
