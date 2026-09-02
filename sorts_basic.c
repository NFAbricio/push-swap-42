/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_basic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 06:36:42 by casampai, f       #+#    #+#             */
/*   Updated: 2026/08/30 21:17:04 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_current_context *context)
{
	int	top;
	int	mid;
	int	bot;

	top = (context->stack_a)->value;
	mid = (context->stack_a)->next->value;
	bot = (context->stack_a)->next->next->value;
	if (top > mid && mid < bot && top < bot)
		sa(context);
	else if (top > mid && mid > bot)
	{
		sa(context);
		rra(context);
	}
	else if (top > mid && mid < bot && top > bot)
		ra(context);
	else if (top < mid && mid > bot && top < bot)
	{
		sa(context);
		ra(context);
	}
	else if (top < mid && mid > bot && top > bot)
		rra(context);
}

/* Retorna a posição (índice 0, 1, 2...) do menor valor na pilha */
static int get_min_position(t_node **a)
{
	t_node	*tmp;
	int		min_value;
	int		min_pos;
	int		current_pos;

	tmp = *a;
	min_value = tmp->value;
	min_pos = 0;
	current_pos = 0;
	while (tmp)
	{
		if (tmp->value < min_value)
		{
			min_value = tmp->value;
			min_pos = current_pos;
		}
		tmp = tmp->next;
		current_pos++;
	}
	return (min_pos);
}

void	sort_five(t_current_context *context)
{
	int	size;
	int	min_pos;

	size = get_stack_size(context->stack_a);
	// Passo 1: Jogar os menores para o B até sobrarem 3 no A
	while (size > 3)
	{
		min_pos = get_min_position(&context->stack_a);
		// Se o menor número está na primeira metade, gira para cima (ra)
		if (min_pos <= size / 2)
		{
			while (min_pos-- > 0)
				ra(context);
		}
		// Se está na segunda metade, gira para baixo (rra)
		else
		{
			while (min_pos++ < size)
				rra(context);
		}
		pb(context); // Empurra o menor atual para B
		size--;
	}
	// Passo 2: Ordena os 3 que ficaram na pilha A
	sort_three(context);
	// Passo 3: Devolve os menores números para a pilha A, na ordem correta
	while (context->stack_b)
		pa(context);
}
