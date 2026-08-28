/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:33:07 by casampai, f       #+#    #+#             */
/*   Updated: 2026/08/27 16:47:13 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  get_max_bits(t_node *a)
{
    int max;
    int bits;

    max = get_stack_size(a);
    bits = 0;
    while((max >> bits) != 0)
        bits++;
    return(bits);
}

void    sort_complex(t_current_context *context)
{
    int size;
    int bits;
    int bit;
    int i;

    bits = get_max_bits(context->stack_a);
    size = get_stack_size(context->stack_a);
    context->complexity = "O(n log n)";
    bit = 0;
    while(bit < bits)
    {
        i = 0;
        while(i < size)
        {
            if(((context->stack_a)->index >> bit) & 1)
                ra(context);
            else
                pb(context);
           i++; 
        }
        while(context->stack_b)
            pa(context);
        bit++;
    }
}
