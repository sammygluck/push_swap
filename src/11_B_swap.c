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

void	swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_node **stack_a)
{
	if (!*stack_a || !(*stack_a)->next)
		return ;
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_node **stack_b)
{
	if (!*stack_b || !(*stack_b)->next)
		return ;
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return ;
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
