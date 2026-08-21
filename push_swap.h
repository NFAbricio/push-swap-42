/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:12 by casampai          #+#    #+#             */
/*   Updated: 2026/08/21 17:53:36 by casampai         ###   ########.fr       */
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
int	get_stategy_selector(char **argv, t_node **stack);
int str_cmp(const char *s1, const char *s2);
#endif
