#include "push_swap.h"

void    ft_error(void)
{
    write(2, "Error\n", 6);
    exit(1);
}

int check_syntax(char *str)
{
    int i;

    i = 0;
    if(str[i] == '-' || str[i] == '+')
        i++;
    if(!str[i])
        return (0);
    while(str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int check_duplicates(t_node *a, int n)
{
    if (!a)
        return (0);
    while(a)
    {
        if (a->value == n)
            return (1);
        a = a->next;
    }
    return(0);
}