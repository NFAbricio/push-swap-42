/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:45 by casampai          #+#    #+#             */
/*   Updated: 2026/08/24 07:16:05 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(t_node **stack)
{
    t_node  *first;
    t_node  *second;

    if (!*stack || !(*stack)->next)
        return;
    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
}

void    sa(t_current_context *context)
{
    swap(&context->stack_a);
    context->total_operations += 1;
    context->count_each_operation->sa += 1;
    write(1, "sa\n", 3);
}

void    sb(t_current_context *context)
{
    swap(&context->stack_b);
    context->total_operations += 1;
    context->count_each_operation->sb += 1;
    write(1, "sb\n", 3);
}

void ss(t_current_context *context)
{
    swap(&context->stack_a);
    swap(&context->stack_b);
    context->total_operations += 1;
    context->count_each_operation->ss += 1;
    write(1, "ss\n", 3);
}
