/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:45 by casampai          #+#    #+#             */
/*   Updated: 2026/08/18 22:33:22 by casampai, f      ###   ########.fr       */
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

void    sa(t_node **a)
{
    swap(a);
    write(1, "sa\n", 3);
}

void    sb(t_node **b)
{
    swap(b);
    write(1, "sb\n", 3);
}

void ss(t_node **a, t_node **b)
{
    swap(a);
    swap(b);
    write(1, "ss\n", 3);
}
