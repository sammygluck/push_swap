/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:24:58 by sgluck            #+#    #+#             */
/*   Updated: 2023/05/10 18:27:50 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		return (1);
	stack_a = stack_a_init(argc, argv, &stack_a);
	stack_b = NULL;
	algorithms(&stack_a, &stack_b);
	free_list(stack_a);
	return (0);
}
