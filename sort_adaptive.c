/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_adaptive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 22:33:04 by casampai, f       #+#    #+#             */
/*   Updated: 2026/08/28 05:51:25 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_adaptive(t_current_context *context)
{
    double disorder;

    disorder = compute_disorder(context);
    if (disorder < 0.2)
        sort_simple(context);
    else if (disorder >= 0.2 && disorder < 0.5)
        sort_medium(context);
    else
        sort_complex(context);
}