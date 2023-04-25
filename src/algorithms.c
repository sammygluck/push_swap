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

void	algorithms(node **stack_a, node **stack_b)
{
	if (is_sorted(*stack_a))
		return ;
	radix(stack_a, stack_b);
}
