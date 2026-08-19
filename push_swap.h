/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:12 by casampai          #+#    #+#             */
/*   Updated: 2026/08/19 07:23:17 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
typedef struct s_node
{
    int value;
    int index;
    struct  s_node  *next;
} t_node;

typedef enum Strategies_Sort
{
    adaptive,
    simple,
    medium,
    complex
} type_sort;

void    ft_error(t_node **stack);
long    ft_atol(const char *str);
int     check_syntax(char *str);
int     check_duplicates(t_node *a, int n);
void    init_stack_a(t_node **a, char **argv);
double  compute_disorder(t_node *a);
int     get_stack_size(t_node *stack);
void    assign_index(t_node *a);
void    free_stack(t_node **stack);
void	sort_simple(t_node **a, t_node **b);
void	sort_medium(t_node **a, t_node **b);
void	sort_complex(t_node **a, t_node **b);
void	sort_adaptive(t_node **a, t_node **b, double disorder);
void    sa(t_node **a);
void    sb(t_node **b);
void    ss(t_node **a, t_node **b);
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
type_sort get_stategy_selector(char **argv);
int str_cmp(const char *s1, const char *s2);
#endif
