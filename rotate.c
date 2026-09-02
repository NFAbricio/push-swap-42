/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:24 by casampai          #+#    #+#             */
/*   Updated: 2026/08/30 20:44:12 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_current_context *context)
{
	rotate(&context->stack_a);
	context->total_operations += 1;
	context->count_each_operation->ra += 1;
	ft_putendl_fd("ra", 2);
}

void	rb(t_current_context *context)
{
	rotate(&context->stack_b);
	context->total_operations += 1;
	context->count_each_operation->rb += 1;
	ft_putendl_fd("rb", 2);
}

void	rr(t_current_context *context)
{
	rotate(&context->stack_a);
	rotate(&context->stack_b);
	context->total_operations += 1;
	context->count_each_operation->rr += 1;
	ft_putendl_fd("rr", 2);
}
