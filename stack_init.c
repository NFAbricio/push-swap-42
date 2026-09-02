/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:40 by casampai          #+#    #+#             */
/*   Updated: 2026/08/30 21:23:14 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

static void	append_node(t_node **stack, int value)
{
	t_node	*new_node;
	t_node	*last;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		ft_error(stack);
	new_node->value = value;
	new_node->next = NULL;
	if (!(*stack))
	{
		*stack = new_node;
		return ;
	}
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = new_node;
}

static int	has_flag(char **argv, int i)
{
	if ((str_cmp(argv[i], "--simple") == 0)
		|| (str_cmp(argv[i], "--medium") == 0)
		|| (str_cmp(argv[i], "--complex") == 0)
		|| (str_cmp(argv[i], "--adaptive") == 0)
		|| (str_cmp(argv[i], "--bench") == 0))
		return (1);
	else
		return (0);
}

void	init_stack_a(t_current_context *context, char **argv)
{
	long	n;
	int		i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '-')
		{
			if (has_flag(argv, i))
			{
				i++;
				continue ;
			}
		}
		if (!check_syntax(argv[i]))
			ft_error(&context->stack_a);
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			ft_error(&context->stack_a);
		if (check_duplicates(context->stack_a, (int)n))
			ft_error(&context->stack_a);
		append_node(&context->stack_a, (int)n);
		i++;
	}
}
