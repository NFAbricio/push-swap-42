/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:07:37 by casampai          #+#    #+#             */
/*   Updated: 2026/06/21 07:32:52 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	int				i;

	i = 0;
	ptr_s = (unsigned char *) s;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		if (ptr_s[i] == (unsigned char)c)
			return ((void *)&ptr_s[i]);
		i++;
	}
	return (NULL);
}
