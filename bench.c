/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 05:49:46 by casampai, f       #+#    #+#             */
/*   Updated: 2026/08/25 14:16:14 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_disorder(t_current_context context)
{
    float disorder;
    char *max_disorder;
    char *min_disorder;

    disorder = compute_disorder(context.stack_a);

    max_disorder = ft_itoa(disorder * 100);
    min_disorder = ft_itoa(((int)(disorder * 10000)) % 100);
    put_err(max_disorder);
    putchar_err('.');
    put_err(min_disorder);
    putchar_err('\n');
}

void    print_strategy(t_current_context context)
{
    
}

void    print_total_ops(t_current_context context)
{
    
}

void    print_each_ops_count(t_current_context context)
{
    
}

void    show_bench(t_current_context context)
{
    put_err("[bench] disorder: ");
    print_disorder(context);
    put_err("[bench] strategy: \n");
    put_err("[bench] total_ops: \n");
    put_err("[bench] sa: 0 sb: 0 ss: 0 pa:500 pb:500 \n");
    put_err("[bench] ra: 4080 rb: 1098 rr: 0 rra:0 rrb 1059 rrr:0 \n");
}