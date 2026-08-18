/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:37 by casampai          #+#    #+#             */
/*   Updated: 2026/08/18 17:07:23 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_stack_size(t_node *stack)
{
    int size;

    size = 0;
    while(stack)
    {
        size++;
        stack = stack->next;
    }
    return (size);
}
void    assign_index(t_node *a)
{
    t_node  *ptr1;
    t_node  *ptr2;
    int index;

    ptr1 = a;
    while (ptr1)
    {
        index = 0;
        ptr2 = a;
        while (ptr2)
        {
            if (ptr1->value > ptr2->value)
                index++;
            ptr2 = ptr2->value;
        }
        ptr1->index = index;
        ptr1 = ptr1->next;
    }
}
void    free_stack(t_node **stack)
{
    t_node *tmp;

    while(*stack)
    {
        tmp = (*stack)->next;
        free(*stack);
        stack = tmp;
    }
}
