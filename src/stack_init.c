/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_stack_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:40:42 by sgluck            #+#    #+#             */
/*   Updated: 2023/05/10 09:13:21 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*two_argument_parser(char *string, t_node **head)
{
	char	*chars;
	int		data;

	*head = NULL;
	chars = ft_strtok(string, ' ');
	while (chars)
	{
		if (!is_actual_number(chars))
			init_error(*head);
		if (!is_number_within_bounds(chars))
			init_error(*head);
		data = ft_atoi(chars);
		end_insert(head, data);
		chars = ft_strtok(NULL, ' ');
	}
	return (*head);
}

t_node	*multiple_argument_parser(int argc, char **argv, t_node **head)
{
	int		i;
	int		data;

	*head = NULL;
	i = 1;
	while (i < argc)
	{	
		if (!is_actual_number(argv[i]))
			init_error(*head);
		if (!is_number_within_bounds(argv[i]))
			init_error(*head);
		data = ft_atoi(argv[i]);
		end_insert(head, data);
		i++;
	}
	return (*head);
}

t_node	*stack_a_init(int argc, char **argv, t_node **head)
{
	t_node	*stack_a;

	stack_a = NULL;
	if (argc == 2)
		stack_a = two_argument_parser(argv[1], head);
	else
		stack_a = multiple_argument_parser(argc, argv, head);
	if (has_duplicates(head))
		init_error(*head);
	return (stack_a);
}

void	init_error(t_node *head)
{
	ft_printf("Error\n");
	if (head != NULL)
		free_list(head);
	exit(EXIT_FAILURE);
}
