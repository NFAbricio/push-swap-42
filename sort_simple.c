#include "push_swap.h"

#include "push_swap.h"

// Calcula o numero maximo de bits necessarios para representar (size - 1)
static int	get_max_bits(t_node *stack_a)
{
	int	max_num;
	int	max_bits;

	max_num = get_stack_size(stack_a) - 1;
	max_bits = 0;
	while ((max_num >> max_bits) > 0)
		max_bits++;
	return (max_bits);
}
void	sort_simple(t_current_context *context)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	context->complexity = "O(n * k)";
	size = get_stack_size(context->stack_a);
	max_bits = get_max_bits(context->stack_a);
	i = -1;
	while (i++ < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			if (((context->stack_a->index >> i) & 1) == 1)
				ra(context);
			else
				pb(context);
		}
		while (context->stack_b)
			pa(context);
		if (is_sorted(context->stack_a))
			break ;
	}
}
