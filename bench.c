/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 05:49:46 by casampai, f       #+#    #+#             */
/*   Updated: 2026/08/28 06:09:31 by casampai, f      ###   ########.fr       */
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

void	print_total_ops(t_current_context *context)
{
	ft_putstr_fd("[bench] total_ops:  ", 2);
	ft_putnbr_fd(context->total_operations, 2);
	ft_putchar_fd('\n', 2);
}

void	print_each_ops_count(t_current_context *context)
{
	t_count_operations	*ops;

	ops = context->count_each_operation;
	if (!ops)
		return ;
	ft_putstr_fd("[bench] sa: ", 2);
	ft_putnbr_fd(ops->sa, 2);
	ft_putstr_fd(" sb: ", 2);
	ft_putnbr_fd(ops->sb, 2);
	ft_putstr_fd(" ss: ", 2);
	ft_putnbr_fd(ops->ss, 2);
	ft_putstr_fd(" pa: ", 2);
	ft_putnbr_fd(ops->pa, 2);
	ft_putstr_fd(" pb: ", 2);
	ft_putnbr_fd(ops->pb, 2);
	ft_putchar_fd('\n', 2);

	ft_putstr_fd("[bench] ra: ", 2);
	ft_putnbr_fd(ops->ra, 2);
	ft_putstr_fd(" rb: ", 2);
	ft_putnbr_fd(ops->rb, 2);
	ft_putstr_fd(" rr: ", 2);
	ft_putnbr_fd(ops->rr, 2);
	ft_putstr_fd(" rra: ", 2);
	ft_putnbr_fd(ops->rra, 2);
	ft_putstr_fd(" rrb: ", 2);
	ft_putnbr_fd(ops->rrb, 2);
	ft_putstr_fd(" rrr: ", 2);
	ft_putnbr_fd(ops->rrr, 2);
	ft_putchar_fd('\n', 2);
}

void	show_bench(t_current_context *context)
{
	print_disorder(context);
	print_strategy(context);
	print_total_ops(context);
	print_each_ops_count(context);
}