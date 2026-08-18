/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:58:12 by casampai          #+#    #+#             */
/*   Updated: 2026/08/18 17:11:38 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_node
{
    int value;
    int index;
    struct  s_node  *next;
} t_node;

void    ft_error(t_node **stack);
long    ft_atol(const char *str);
int check_syntax(char *str);
int check_duplicates(t_node *a, int n);
void    init_stack_a(t_node **a, char **argv);
double  compute_disorder(t_node *a);
int get_stack_size(t_node *stack);
void    assign_index(t_node *a);
void    free_stack(t_node **stack);
#endif
