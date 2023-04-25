/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:00:05 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/23 14:02:12 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(node **stack)
{
	node	*first;
	node	*second;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(node **stack_a)
{
	swap(stack_a);
	printf("sa\n");
}

void	sb(node **stack_b)
{
	swap(stack_b);
	printf("sb\n");
}

void	ss(node **stack_a, node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
