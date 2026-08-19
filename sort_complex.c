/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:33:07 by casampai, f       #+#    #+#             */
/*   Updated: 2026/08/19 07:15:54 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  get_max_bits(t_node **a)
{
    int max;
    int bits;

    max = get_stack_size(*a);
    bits = 0;
    while((max >> bits) != 0)
        bits++;
    return(bits);
}

void    sort_complex(t_node **a, t_node **b)
{
    int size;
    int bits;
    int bit;
    int i;

    bits = get_max_bits(a);
    size = get_stack_size(*a);
    bit = 0;
    while(bit < bits)
    {
        i = 0;
        while(i < size)
        {
            if(((*a)->index >> bit) && 1)
                ra(a);
            else
                pb(a, b);
           i++; 
        }
        while(*b)
            pa(a, b);
        bit++;
    }
}
