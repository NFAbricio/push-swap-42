/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:59:38 by casampai          #+#    #+#             */
/*   Updated: 2026/08/21 17:57:20 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_node		*stack_a;
	t_node		*stack_b;
	int	sort;

	stack_a = NULL;
	stack_b = NULL;

	if (argc < 2)
		exit(1);
	init_stack_a(&stack_a, argv);
	if (!stack_a)
		return (0);
	assign_index(stack_a);
	sort = get_stategy_selector(argv, &stack_a);
	if (sort == 1)
		sort_simple(&stack_a, &stack_b);
	else if (sort == 2)
		sort_medium(&stack_a, &stack_b);
	else if (sort == 3)
		sort_complex(&stack_a, &stack_b);
	else
		sort_adaptive(&stack_a, &stack_b, compute_disorder(stack_a));
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
