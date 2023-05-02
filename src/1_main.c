/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:24:58 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/25 15:45:40 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
	{
		printf("USAGE: %s <\" string of numbers \">\n", argv[0]);
		return (1);
	}
		
	stack_a = stack_a_init(argc, argv, &stack_a);
	stack_b = NULL;
	algorithms(&stack_a, &stack_b);
	//print_list(stack_a);
	//print_list(stack_b);
	return (0);
}
