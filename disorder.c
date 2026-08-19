/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:57:45 by casampai          #+#    #+#             */
/*   Updated: 2026/08/18 22:32:36 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double  compute_disorder(t_node *a)
{
    t_node  *current;
    t_node  *runner;
    double  mistakes;
    double  total_pairs;

    mistakes = 0;
    total_pairs = 0;
    current = a;
    while(current)
    {
        runner = current->next;
        while (runner)
        {
            total_pairs++;
            if (current->value > runner->value)
                mistakes++;
            runner = runner->next;
        }
        current = current->next;
    }
    if (total_pairs == 0)
        return (0.0);
    return (mistakes / total_pairs);
}
