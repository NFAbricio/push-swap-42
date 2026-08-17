#include "push_swap.h"

static void push(t_node **src, t_node **dest)
{
    t_node  *temp;

    if (!*src)
        return ;
    temp = *src;
    *src = (*src)->next;
    temp->next = *dest;
    *dest = temp;
}

void    pa(t_node **a, t_node **b)
{
    push(b, a);
    write(1, "pa\n", 3);  
}

void    pb(t_node **a, t_node **b)
{
    push(a, b);
    write(1, "pb\n", 3);
}
