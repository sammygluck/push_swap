/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_code.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:15:16 by sgluck            #+#    #+#             */
/*   Updated: 2023/05/11 13:30:26 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_stack(t_node **stack_a)
{
	int		first;
	int		second;
	int		third;

	normalize_stack(stack_a);
	first = (*stack_a)->data;
	second = (*stack_a)->next->data;
	third = (*stack_a)->next->next->data;
	if (first == 2 && second == 0 && third == 1)
		ra(stack_a);
	else if (first == 2 && second == 1 && third == 0)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first == 0 && second == 2 && third == 1)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (first == 1 && second == 0 && third == 2)
		sa(stack_a);
	else if (first == 1 && second == 2 && third == 0)
		rra(stack_a);	
}
