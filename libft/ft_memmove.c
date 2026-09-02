/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:32:37 by casampai          #+#    #+#             */
/*   Updated: 2026/06/22 17:08:18 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char *) dest;
	ptr_src = (char *) src;
	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
	{
		ptr_dest += (n - 1);
		ptr_src += (n - 1);
		while (n--)
			*ptr_dest-- = *ptr_src--;
	}
	else
	{
		while (n--)
			*ptr_dest++ = *ptr_src++;
	}
	return (dest);
}
