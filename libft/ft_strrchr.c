/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:01:48 by casampai          #+#    #+#             */
/*   Updated: 2026/06/22 17:58:28 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr_str;
	char	*last_char_ptr;

	ptr_str = (char *)str;
	last_char_ptr = 0;
	while (*ptr_str)
	{
		if (*ptr_str == c)
			last_char_ptr = ptr_str;
		ptr_str++;
	}
	if (*ptr_str == (char)c)
		return (ptr_str);
	return (last_char_ptr);
}
