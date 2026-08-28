/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:07 by casampai          #+#    #+#             */
/*   Updated: 2026/08/28 06:31:14 by casampai, f      ###   ########.fr       */
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

void	identify_flags(char **argv, t_current_context *context)
{
	int			i;

	i = 1;
	while (argv[i])
	{
		if (str_cmp(argv[i], "--simple") == 0)
			context->strategy = 1;
		if (str_cmp(argv[i], "--medium") == 0)
			context->strategy = 2;
		if (str_cmp(argv[i], "--complex") == 0)
			context->strategy = 3;
		if (str_cmp(argv[i], "--adaptive") == 0)
			context->strategy = 4;
		if (str_cmp(argv[i], "--bench") == 0)
			context->is_bench = 1;
		i++;
	}
	if (context->strategy == -1)
		ft_error(&context->stack_a);
}
