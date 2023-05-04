/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:48:52 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/25 15:34:39 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*first;

	if (!*stack_a)
		return ;
	first = *stack_a;
	*stack_a = first->next;
	first->next = *stack_b;
	*stack_b = first;
	printf("pb\n");
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*first;

	if (!*stack_b)
		return ;
	first = *stack_b;
	*stack_b = first->next;
	first->next = *stack_a;
	*stack_a = first;
	printf("pa\n");
}
