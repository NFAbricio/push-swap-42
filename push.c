/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:16 by casampai          #+#    #+#             */
/*   Updated: 2026/08/28 06:06:36 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void push(t_node **src, t_node **dest)
{
    t_node  *temp;

    if (!*src)
        return ;
    temp = *src;
    *src = (*src)->next;
    temp->next = *dest;
    *dest = temp;
}
void    pa(t_current_context *context)
{
    push(&context->stack_b, &context->stack_a);
    context->total_operations += 1;
    context->count_each_operation->pa += 1;
    write(1, "pa\n", 3);  
}
void    pb(t_current_context *context)
{
    push(&context->stack_a, &context->stack_b);
    context->total_operations += 1;
    context->count_each_operation->pb += 1;
    write(1, "pb\n", 3);
}
