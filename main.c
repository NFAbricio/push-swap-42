/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:59:38 by casampai          #+#    #+#             */
/*   Updated: 2026/08/19 07:25:48 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *stack_a;
    t_node *stack_b;
    type_sort sort;

    stack_a = NULL;
    stack_b = NULL;
    
    if (argc < 2)
        exit(1);
    init_stack_a(&stack_a, argv);
    assign_index(stack_a);
    sort = get_stategy_selector(argv);
    if (sort == simple)
        sort_simple(&stack_a, &stack_b);
    else if(sort == medium)
        sort_medium(&stack_a, &stack_b);
    else if(sort == complex)
        sort_complex(&stack_a, &stack_b);
    else
        sort_adaptive(&stack_a, &stack_b, compute_disorder(stack_a));
    free_stack(&stack_a);
    free_stack(&stack_b);
    return (0);
}
