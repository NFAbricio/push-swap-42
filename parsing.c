/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:07 by casampai          #+#    #+#             */
/*   Updated: 2026/08/22 15:35:46 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_node **stack)
{
	free_stack(stack);
	write(2, "Error\n", 6);
	exit(1);
}

int	check_syntax(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (!(str[i] == ' '))
				return (0);
		}
		i++;
	}
	return (1);
}

int	check_duplicates(t_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

int	get_stategy_selector(char **argv, t_node **stack)
{
	int			sort;
	int			i;

	sort = 0;
	i = 1;
	while (argv[i])
	{
		if (str_cmp(argv[i], "--simple") == 0)
			sort = 1;
		if (str_cmp(argv[i], "--medium") == 0)
			sort = 2;
		if (str_cmp(argv[i], "--complex") == 0)
			sort = 3;
		if (str_cmp(argv[i], "--adaptive") == 0)
			sort = 4;
		i++;
	}
	if (sort == -1)
		ft_error(stack);
	return ((int)sort);
}
