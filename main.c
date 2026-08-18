/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:59:38 by casampai          #+#    #+#             */
/*   Updated: 2026/08/18 17:13:06 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *stack_a;
    t_node *stack_b;

    stack_a = NULL;
    stack_b = NULL;
    
    if (argc < 2)
        exit(1);
    init_stack_a(stack_a, argv);
    assign_index(stack_a);

    //algoritmo de ordenacao
    
    return (0);
}
