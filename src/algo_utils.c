/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_algo_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:24:48 by sgluck            #+#    #+#             */
/*   Updated: 2023/05/11 12:56:40 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_length(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	is_sorted(t_node *head)
{
	t_node	*current;
	t_node	*next_node;

	if (head == NULL || head->next == NULL)
		return (1);
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		if (next_node != NULL && current->data > next_node->data)
			return (0);
		current = next_node;
	}
	return (1);
}

int	find_min(t_node *stack)
{
	t_node	*current;
	int		min;

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
