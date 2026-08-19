/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:07 by casampai          #+#    #+#             */
/*   Updated: 2026/08/19 07:24:52 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_error(t_node **stack)
{
    free_stack(stack);
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
type_sort get_stategy_selector(char **argv)
{
    type_sort sort;
    int i;
    
    sort = adaptive;
    i = 0;
    while(argv[i])
    {
        if(str_cmp(argv[i], "--simple") == 0)
            sort = simple;
        if(str_cmp(argv[i], "--medium") == 0)
            sort = medium;
        if(str_cmp(argv[i], "--complex") == 0)
            sort = complex;
        i++;
    }
    return(sort);
}
