/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:43:54 by casampai          #+#    #+#             */
/*   Updated: 2026/06/22 17:38:53 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	while (src[i] && size - 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dst[i] = '\0';
	return (len_src);
}
