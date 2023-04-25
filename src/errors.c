/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:36:36 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/25 17:00:37 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicates(node **stack)
{
	int		i;
	int		j;
	node	*current_1;
	node	*current_2;

	i = 0;
	current_1 = *stack;
	while (i < stack_length(*stack))
	{
		j = 0;
		current_2 = *stack;
		while (j < stack_length(*stack))
		{
			if (i != j && current_1->data == current_2->data)
				return (1);
			current_2 = current_2->next;
			i++;
		}
		current_1 = current_1->next;
		i++;
	}
	return (0);
}
