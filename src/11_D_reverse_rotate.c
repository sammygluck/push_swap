/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:37:38 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/23 16:46:52 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*prev;
	t_node	*last;

	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return ;
	reverse_rotate(stack);
	printf("rra\n");
}

void	rrb(t_node **stack)
{
	if (!*stack || !(*stack)->next)
		return ;
	reverse_rotate(stack);
	printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	printf("rrr\n");
}
