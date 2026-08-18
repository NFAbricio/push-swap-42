#include "push_swap.h"

void    sort_adaptive(t_node **a, t_node **b, double disorder)
{
    if (!disorder < 0.2)
        sort_simple(a, b);
    else if (disorder >= 0.2 && disorder < 0.5)
        sort_medium(a, b);
    else
        sort_complex(a, b);
}