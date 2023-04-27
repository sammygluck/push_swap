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

int     shortest_way(t_node **stack)
{
    int     len;
    int     min;

    len = stack_length(*stack);
    min = find_min(*stack);
    find_index_min();
    if (index < len/2)
        push_through_ra; //i.e. return value to reflect this
    else
        push_through_rra; //i.e. return value to reflect this
}

void	small_stack_sort(t_node **stack_a, t_node **stack_b)
{
	
}
