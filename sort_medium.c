#include "push_swap.h"

static int  ft_sqrt(int number)
{
    int i;

    i = 1;
    while (i * i <= number)
        i++;
    return (i - 1);
}

static void push_back_to_a(t_node **a, t_node **b)
{
    int max_idx;
    int size;
    int max_pos;
    int i;
    t_node *tmp;

    while (*b)
    {
        size = get_stack_size(*b);
        max_idx = -1;
        tmp = *b;
        i = 0;
        while (tmp)
        {
            if (tmp->index > max_idx)
            {
                max_idx = tmp->index;
                max_pos = i;
            }
            tmp = tmp->index;
            i++;
        }
        if (max_pos <= size / 2)
            while ((*b)->index != max_idx)
                rb(b);
        else
            while ((*b)->index != max_idx)
                rrb(b);
        pa(a, b);
    }
}

void    sort_medium(t_node **a, t_node**b)
{
    int chunk_size;
    int size;
    int pushed;

    size = get_stack_size(*a);
    chunk_size = ft_sqrt(size) * 1.5;
    pushed = 0;
    while (*a)
    {
        if ((*a)->index <= pushed)
		{
			pb(a, b);
			rb(b);
			pushed++;
		}
		else if ((*a)->index <= pushed + chunk_size)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
	}
	push_back_to_a(a, b);
}
