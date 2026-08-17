#include "push_swap.h"

t_node *pop(t_stack *stack) {
    if (!stack || !stack->top)
        return (NULL);
    t_node *node = stack->top;
    stack->top = node->next;
    if (stack->top)
        stack->top->prev = NULL;
    node->next = NULL;
    stack->size--;
    return (node);
}

void push_node(t_stack *stack, t_node *node) {
    if (!stack || !node)
        return;
    node->next = stack->top;
    node->prev = NULL;
    if (stack->top)
        stack->top->prev = node;
    else
        stack->bottom = node;
    stack->top = node;
    stack->size++;
}