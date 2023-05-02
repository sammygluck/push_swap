/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:07:26 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/25 15:34:59 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_node *stack)
{
	t_node	*current;
	int		max;

	max = 0;
	current = stack;
	while (current)
	{
		if (current->data > max)
			max = current->data;
		current = current->next;
	}
	return (max);
}

int	bit_length(int max)
{
	int	length;

	length = 0;
	while (max)
	{
		max = max >> 1;
		length++;
	}
	return (length);
}

void	radix(t_node **stack_a, t_node **stack_b)
{
	t_node	*current;
	int		max;
	int		i;
	int		j;

	normalize_stack(stack_a);
	max = find_max(*stack_a);
	i = 0;
	while (i < bit_length(max))
	{
		j = 0;
		while (j < max)
		{
			current = *stack_a;
			if (((current->data >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
