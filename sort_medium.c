/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:30 by casampai          #+#    #+#             */
/*   Updated: 2026/08/27 16:47:40 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  ft_sqrt(int number)
{
    int i;

    i = 1;
    while (i * i <= number)
        i++;
    return (i - 1);
}
static void verify_max_pos(t_current_context *context, int max_pos, int size, int max_idx)
{
    if (max_pos <= size / 2)
        while ((context->stack_b)->index != max_idx)
        rb(context);
    else
        while ((context->stack_b)->index != max_idx)
        rrb(context);
}
static void push_back_to_a(t_current_context *context)
{
    int max_idx;
    int size;
    int max_pos;
    int i;
    t_node *tmp;

    while (context->stack_b)
    {
        size = get_stack_size(context->stack_b);
        max_idx = -1;
        tmp = context->stack_b;
        i = 0;
        while (tmp)
        {
            if (tmp->index > max_idx)
            {
                max_idx = tmp->index;
                max_pos = i;
            }
            tmp = tmp->next;
            i++;
        }
        verify_max_pos(context, max_pos, size, max_idx);
        pa(context);
    }
}
void    sort_medium(t_current_context *context)
{
    int chunk_size;
    int size;
    int pushed;

    size = get_stack_size(context->stack_a);
    chunk_size = ft_sqrt(size) * 1.5;
    context->complexity = "O(n√n)";
    pushed = 0;
    while (context->stack_a)
    {
        if ((context->stack_a)->index <= pushed)
		{
			pb(context);
			rb(context);
			pushed++;
		}
		else if ((context->stack_a)->index <= pushed + chunk_size)
		{
			pb(context);
			pushed++;
		}
		else
			ra(context);
	}
	push_back_to_a(context);
}
