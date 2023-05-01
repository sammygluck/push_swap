/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:30:26 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/25 17:36:55 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_min(t_node *stack)
{
    //error check needed?
    int     min;
    t_node  *current;

    current = stack;
    min = current->data;
    while (current)
    {
        if (current->data < min)
            min = current->data;
        current = current->next;
    }
    return (min);
}

int     find_index_of_value(t_node *stack, int  target)
{
    t_node      *current;
    int     i;

    current = stack;
    i = 0;
    while (current)
    {
        if(current->data == target)
            return (i);
        current = current->next;
        i++;
    }
    return (-1);
}

int     is_ra_shortest_way(t_node *stack, int value)
{
    int     len;
    int     min;
    int     index;

    len = stack_length(stack);
    min = value;
    index = find_index_of_value(stack, min);
    if (index < len/2)
        return (1); 
    else
        return (0); 
}

void    rotate_to_top_through_ra(t_node **stack, int value)
{
        if (*stack == NULL)
            return ;
        while ((*stack)->data != value)
            ra(stack);
}

void    rotate_to_top_through_rra(t_node **stack, int value)
{
    if (*stack == NULL)
        return ;
    while ((*stack)->data != value)
        rra(stack);
}

void	small_stack_sort(t_node **stack_a, t_node **stack_b)
{
   int      min;

   while (!is_sorted(*stack_a))
   {
        min = find_min(*stack_a);
        if (is_ra_shortest_way(*stack_a, min))
            rotate_to_top_through_ra(stack_a, min);
        else 
            rotate_to_top_through_rra(stack_a, min);
        if (is_sorted(*stack_a))
            break;
        pb(stack_b, stack_a);        
   }
   while (*stack_b != NULL)
        pa(stack_a, stack_b);
}
