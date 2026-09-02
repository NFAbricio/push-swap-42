/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:27:06 by casampai          #+#    #+#             */
/*   Updated: 2026/06/20 17:22:28 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_len_n(long n)
{
	long	result;
	size_t	len;

	result = n;
	len = 0;
	if (!n)
		return (1);
	if (n < 0)
		len++;
	while (result != 0)
	{
		result /= 10;
		len++;
	}
	return (len);
}

static	void	get_n_converted(long n, char *str, size_t len_str)
{
	int		sign;
	size_t	i;

	i = len_str - 1;
	sign = 0;
	str[len_str] = '\0';
	if (n == 0)
	{
		str[i] = '0';
		return ;
	}
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	while (n > 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len_n;

	len_n = get_len_n(n);
	str = malloc(len_n + 1);
	if (!str)
		return (NULL);
	get_n_converted(n, str, len_n);
	return (str);
}
