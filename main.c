/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:59:38 by casampai          #+#    #+#             */
/*   Updated: 2026/08/25 19:05:36 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_current_context	current_context;
	t_count_operations	count;
	int					sort;

	current_context.stack_a = NULL;
	current_context.stack_b = NULL;
	current_context.total_operations = 0;
	current_context.count_each_operation = &count;
	count = (t_count_operations){0};
	current_context.is_bench = 0;
	if (argc < 2)
		exit(1);
	init_stack_a(&current_context.stack_a, argv);
	if (!current_context.stack_a)
		return (0);
	assign_index(current_context.stack_a);
	identify_flags(argv, &current_context.stack_a);
	if (current_context.strategy == 0)
		current_context.strategy == 4;
	if (current_context.strategy == 1)
		sort_simple(&current_context);
	else if (current_context.strategy == 2)
		sort_medium(&current_context);
	else if (current_context.strategy == 3)
		sort_complex(&current_context);
	else
		sort_adaptive(&current_context);
		//live 
	free_stack(&current_context.stack_a);
	free_stack(&current_context.stack_b);
	return (0);
}
