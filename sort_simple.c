/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 15:38:48 by casampai, f       #+#    #+#             */
/*   Updated: 2026/09/02 16:06:03 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  get_min_index_pos(t_node *a, int *min_idx)
{
	t_node  *tmp;
	int min_pos;
	int i;

	tmp = a;
	*min_idx = tmp->index;
	min_pos = 0;
	i = 0;
	while(tmp)
	{
		if (tmp->index < *min_idx)
		{
			*min_idx = tmp->index;
			min_pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (min_pos);
}
void    sort_simple(t_current_context *context)
{
	int size;
	int min_pos;
	int min_idx;

	size = get_stack_size(context->stack_a);
	while (size > 0)
	{
		min_pos = get_min_index_pos(context->stack_a, &min_idx);
		if (min_pos <= size / 2)
		{
			while ((context->stack_a)->index != min_idx)
				ra(context);
		}
		else
		{
			while ((context->stack_a)->index != min_idx)
				rra(context);
		}
		pb(context);
		size--;
	}
	while (context->stack_b)
		pa(context);
}
