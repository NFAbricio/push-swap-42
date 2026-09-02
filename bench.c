/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 05:49:46 by casampai, f       #+#    #+#             */
/*   Updated: 2026/09/02 20:15:27 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

void	print_disorder(t_current_context *context)
{
	float	disorder;
	int		int_part;
	int		dec_part;

	disorder = context->initial_disorder;
	int_part = (int)(disorder * 100.0f);
	dec_part = (int)((disorder * 100.0f - int_part) * 100.0f + 0.5f);
	if (dec_part >= 100)
	{
		int_part++;
		dec_part = 0;
	}
	ft_putstr_fd("[bench] disorder:  ", 2);
	ft_putnbr_fd(int_part, 2);
	ft_putchar_fd('.', 2);
	if (dec_part < 10)
		ft_putchar_fd('0', 2);
	ft_putnbr_fd(dec_part, 2);
	ft_putstr_fd("%\n", 2);
}

void	print_strategy(t_current_context *context)
{
	ft_putstr_fd("[bench] strategy:  ", 2);
	if (context->strategy == 1)
		ft_putstr_fd("Simple / ", 2);
	else if (context->strategy == 2)
		ft_putstr_fd("Medium / ", 2);
	else if (context->strategy == 3)
		ft_putstr_fd("Complex / ", 2);
	else
		ft_putstr_fd("Adaptive / ", 2);
	if (context->complexity)
		ft_putstr_fd(context->complexity, 2);
	else
		ft_putstr_fd("N/A", 2);
	ft_putchar_fd('\n', 2);
}


static void	print_op(char *label, int val)
{
	ft_putstr_fd(label, 2);
	ft_putnbr_fd(val, 2);
}

void	print_each_ops_count(t_current_context *context)
{
	t_count_operations	*ops;

	ops = context->count_each_operation;
	if (!ops)
		return ;
	print_op("[bench] sa: ", ops->sa);
	print_op(" sb: ", ops->sb);
	print_op(" ss: ", ops->ss);
	print_op(" pa: ", ops->pa);
	print_op(" pb: ", ops->pb);
	ft_putchar_fd('\n', 2);
	print_op("[bench] ra: ", ops->ra);
	print_op(" rb: ", ops->rb);
	print_op(" rr: ", ops->rr);
	print_op(" rra: ", ops->rra);
	print_op(" rrb: ", ops->rrb);
	print_op(" rrr: ", ops->rrr);
	ft_putchar_fd('\n', 2);
}

void	show_bench(t_current_context *context)
{
	print_disorder(context);
	print_strategy(context);
	ft_putstr_fd("[bench] total_ops:  ", 2);
	ft_putnbr_fd(context->total_operations, 2);
	ft_putchar_fd('\n', 2);
	print_each_ops_count(context);
}
