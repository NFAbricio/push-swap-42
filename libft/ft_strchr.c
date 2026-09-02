/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 17:14:10 by casampai          #+#    #+#             */
/*   Updated: 2026/06/22 17:14:23 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr_str;

	ptr_str = (char *)str;
	while (*ptr_str)
	{
		if (*ptr_str == c)
			return (ptr_str);
		ptr_str++;
	}
	if (*ptr_str == (char)c)
		return (ptr_str);
	return (NULL);
}
