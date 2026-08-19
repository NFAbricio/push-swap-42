/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:34 by casampai          #+#    #+#             */
/*   Updated: 2026/08/19 07:16:18 by casampai, f      ###   ########.fr       */
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
void    sort_simple(t_node **a, t_node **b)
{
    int size;
    int min_pos;
    int min_idx;

    size = get_stack_size(*a);
    while (size > 0)
    {
        min_pos = get_min_index_pos(*a, &min_idx);
        if (min_pos <= size / 2)
        {
            while ((*a)->index != min_idx)
                ra(a);
        }
        else
        {
            while ((*a)->index != min_idx)
                rra(a);
        }
        pb(a, b);
        size--;
    }
    while (*b)
        pa(a, b);
}
