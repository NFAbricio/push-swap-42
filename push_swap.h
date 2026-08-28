/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai, fnunes-d <casampai, fnunes-d@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:12 by casampai          #+#    #+#             */
/*   Updated: 2026/08/28 06:45:58 by casampai, f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
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

typedef struct t_count
{
int sa;
int sb;
int ss;
int pa;
int pb;
int ra;
int rb;
int rr;
int rra;
int rrb;
int rrr;
} t_count_operations;

typedef struct t_context
{
    t_node *stack_a;
    t_node *stack_b;
    t_count_operations *count_each_operation;
    int total_operations;
    int strategy;
    int is_bench;
    char *complexity;
    float initial_disorder;
} t_current_context;

void    ft_error(t_node **stack);
long    ft_atol(const char *str);
int     check_syntax(char *str);
int     check_duplicates(t_node *a, int n);
void    init_stack_a(t_current_context *context, char **argv);
float  compute_disorder(t_current_context *context);
int     get_stack_size(t_node *stack);
void    assign_index(t_current_context context);
void    free_stack(t_node **stack);
void	sort_simple(t_current_context *context);
void	sort_medium(t_current_context *context);
void	sort_complex(t_current_context *context);
void	sort_adaptive(t_current_context *context);
void    sa(t_current_context *context);
void    sb(t_current_context *context);
void    ss(t_current_context *context);
void    pa(t_current_context *context);
void    pb(t_current_context *context);
void	ra(t_current_context *context);
void	rb(t_current_context *context);
void	rr(t_current_context *context);
void	rra(t_current_context *context);
void	rrb(t_current_context *context);
void	rrr(t_current_context *context);
void	identify_flags(char **argv, t_current_context *context);
int     str_cmp(const char *s1, const char *s2);
void    show_bench(t_current_context *context);
int	is_sorted(t_node *stack);
void sort_three(t_current_context *context);
void sort_five(t_current_context *context);
#endif
