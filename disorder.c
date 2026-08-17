#include "push_swap.h"

double  compute_disorder(t_node *a)
{
    t_node  *current;
    t_node  *runner;
    double  mistakes;
    double  total_pairs;

    mistakes = 0;
    total_pairs = 0;
    current = a;
    while(current)
    {
        runner = current->next;
        while (runner)
        {
            total_pairs++;
            if (current->value > runner->value)
                mistakes++;
            runner = runner->next;
        }
        current = current->next;
    }
    if (total_pairs == 0)
        return (0.0);
    return (mistakes / total_pairs);
}
