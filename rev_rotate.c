#include "push_swap.h"

static void	rev_rotate(t_node **stack)
{
	t_node	*last;
	t_node	*second_last;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_node **a)
{
	rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	rev_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	rev_rotate(a);
	rev_rotate(b);
	write(1, "rrr\n", 4);
}