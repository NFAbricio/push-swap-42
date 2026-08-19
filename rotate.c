/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:24 by casampai          #+#    #+#             */
/*   Updated: 2026/08/18 22:33:02 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(t_node **stack)
{
    t_node  *first;
    t_node  *last;

    if(!*stack || !(*stack)->next)
        return ;
    first = *stack;
    last = *stack;
    while(last->next)
        last = last->next;
    *stack = first->next;
    first->next = NULL;
    last->next = first;
}
void	ra(t_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}
void	rb(t_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}
void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
