/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_adaptive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:33:04 by casampai, f       #+#    #+#             */
/*   Updated: 2026/08/19 06:47:01 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_adaptive(t_node **a, t_node **b, double disorder)
{
    if (disorder < 0.2)
        sort_simple(a, b);
    else if (disorder >= 0.2 && disorder < 0.5)
        sort_medium(a, b);
    else
        sort_complex(a, b);
}