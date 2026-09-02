/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:34:52 by casampai          #+#    #+#             */
/*   Updated: 2026/06/26 06:05:21 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr_s1;
	char	*ptr_s2;

	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	if (n == 0)
		return (0);
	while ((*ptr_s1 == *ptr_s2) && --n)
	{
		ptr_s1++;
		ptr_s2++;
	}
	return ((unsigned char)*ptr_s1 - (unsigned char)*ptr_s2);
}
