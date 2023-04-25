/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:31:00 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/23 16:47:43 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(node **stack)
{
	node	*first;
	node	*second;
	node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	last = second;
	while (last->next)
		last = last->next;
	first->next = NULL;
	last->next = first;
	*stack = second;
}

void	ra(node **stack)
{
	rotate(stack);
	printf("ra\n");
}

void	rb(node **stack)
{
	rotate(stack);
	printf("rb\n");
}

void	rr(node **stack_a, node **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
