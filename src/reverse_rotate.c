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

void	reverse_rotate(node **stack)
{
	node	*prev;
	node	*last;

	if (!*stack || !(*stack)->next)
		return ;
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

void	rra(node **stack)
{
	reverse_rotate(stack);
	printf("rra\n");
}

void	rrb(node **stack)
{
	reverse_rotate(stack);
	printf("rrb\n");
}

void	rrr(node **stack_a, node **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
