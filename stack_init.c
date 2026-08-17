#include "push_swap.h"

long    ft_atol(const char *str)
{
    long    res;
    int sign;

    res = 0;
    sign = 1;
    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++; 
    }
    return (res * sign);
}

static void append_node(t_node **stack, int value)
{
    t_node  *new_node;
    t_node  *last;

    new_node = malloc(sizeof(t_node));
    if(!new_node)
        ft_error();
    new_node->value = value;
    new_node->next = NULL;
    if(!(*stack))
    {
        *stack = new_node;
        return ;
    }
    last = *stack;
    while(last->next)
        last = last->next;
    last->next = new_node;
}

void    init_stack_a(t_node **a, char **argv)
{
    long    n;
    int i;
    
    i = 1;
    while(argv[i])
    {
        if(!check_syntax(argv[i]))
            ft_error();
        n = ft_atol(argv[i]);
        if (n > INT_MAX || n < INT_MIN)
            ft_error();
        if (check_duplicates(*a, (int)n))
            ft_error();
        append_node(a, (int)n);
            i++;
    }
}