/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:20 by casampai          #+#    #+#             */
/*   Updated: 2026/08/24 07:14:11 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_node **stack)
{
	t_node	*last;
	t_node	*second_last;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *stack;
	*stack = last;
}
void	rra(t_current_context *context)
{
	rev_rotate(&context->stack_a);
	context->total_operations += 1;
    context->count_each_operation->rra += 1;
	write(1, "rra\n", 4);
}
void	rrb(t_current_context *context)
{
	rev_rotate(&context->stack_b);
	context->total_operations += 1;
    context->count_each_operation->rrb += 1;
	write(1, "rrb\n", 4);
}
void	rrr(t_current_context *context)
{
	rev_rotate(&context->stack_a);
	rev_rotate(&context->stack_b);
	context->total_operations += 1;
    context->count_each_operation->rrr += 1;
	write(1, "rrr\n", 4);
}
