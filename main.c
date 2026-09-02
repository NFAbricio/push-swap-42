/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:59:38 by casampai          #+#    #+#             */
/*   Updated: 2026/09/02 19:19:38 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_sort(t_current_context *current_context, int size)
{
	if (size == 2)
		sa(current_context);
	else if (size == 3)
		sort_three(current_context);
	else if (size <= 5)
		sort_five(current_context);
	else
	{
		if (current_context->strategy == 1)
			sort_simple(current_context);
		else if (current_context->strategy == 2)
			sort_medium(current_context);
		else if (current_context->strategy == 3)
			sort_complex(current_context);
		else
			sort_adaptive(current_context);
	}
	if (current_context->is_bench == 1)
		show_bench(current_context);
}

int	main(int argc, char **argv)
{
	t_current_context	current_context;
	t_count_operations	count;
	int					size;

	if (argc < 2)
		exit(0);
	ft_bzero(&current_context, sizeof(t_current_context));
	ft_bzero(&count, sizeof(t_count_operations));
	current_context.count_each_operation = &count;
	identify_flags(argv, &current_context);
	init_stack_a(&current_context, argv);

	if (!current_context.stack_a)
		return (0);
	current_context.initial_disorder = compute_disorder(&current_context);
	size = get_stack_size(current_context.stack_a);
	assign_index(&current_context);
	if (is_sorted(current_context.stack_a))
		return (free_stack(&current_context.stack_a), 0);
	init_sort(&current_context, size);
	free_stack(&current_context.stack_a);
	free_stack(&current_context.stack_b);
	return (0);
}
