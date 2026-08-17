#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_node
{
    int value;
    struct  s_node  *next;
} t_node;

void    ft_error(void);
int check_syntax(char *str);
int check_duplicates(t_node *a, int n);
#endif