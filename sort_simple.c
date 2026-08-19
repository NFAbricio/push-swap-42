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

static int  get_insert_pos(t_node *b, int index)
{
    t_node  *tmp;
    int pos;
    int target;
    int closest;

    tmp = b;
    pos = 0;
    target = 0;
    closest = -1;
    while (tmp)
    {
        if (tmp->index <  index  && tmp->index > closest)
        {
            closest = tmp->index;
            target = pos;
        }
        tmp = tmp->next;
        pos++;
    }
    if (closest == -1)
    {
        tmp = b;
        pos = 0;
        while (tmp)
        {
            if (tmp->index > closest)
            {
                closest = tmp->index;
                target = pos;
            }
            tmp = tmp->next;
            pos++;
        }
    }
    return (target);
}

void    sort_simple(t_node **a, t_node **b)
{
    int	pos;
	int	size;

	while (*a)
	{
		if (!*b)
			pb(a, b);
		else
		{
			pos = get_insert_pos(*b, (*a)->index);
			size = get_stack_size(*b);
			if (pos <= size / 2)
				while (pos-- > 0)
					rb(b);
			else
			{
				pos = size - pos;
				while (pos-- > 0)
					rrb(b);
			}
			pb(a, b);
		}
	}
	pos = get_insert_pos(*b, get_stack_size(*b) + 1);
	size = get_stack_size(*b);
	if (pos <= size / 2)
		while (pos-- > 0)
			rb(b);
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			rrb(b);
	}
	while (*b)
		pa(a, b);
}
