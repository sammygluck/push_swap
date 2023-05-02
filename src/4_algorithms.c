/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:36:39 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/25 15:44:38 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithms(t_node **stack_a, t_node **stack_b)
{
	int		stack_size;

	stack_size = stack_length(*stack_a);	
	if (is_sorted(*stack_a) || stack_size == 1)
		return ;
	if (stack_size == 2)
		sa(stack_a);
	if (stack_size > 2 && stack_size < 12)
		small_stack_sort(stack_a, stack_b);
	if (stack_size > 12)
		radix(stack_a, stack_b);
}
