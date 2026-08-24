/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 05:49:46 by casampai, f       #+#    #+#             */
/*   Updated: 2026/08/24 07:25:38 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void put_str(char *str)
{
    int count;
    
    count = 0;
    while(*(str + count))
        count++;
    write(2, str, count);
}

void    show_bench(t_current_context context)
{
    
}