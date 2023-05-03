/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:40:42 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/25 15:41:06 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_node *two_argument_parser(char *string, t_node **head)
{
	char	*chars;
	int		data;

	*head = NULL;
	chars = ft_strtok(string, ' ');
	while (chars)
	{
		if (!is_actual_number(chars))
			printf("The input: <%s> isn't an actual number \n", chars);
		data = ft_atoi(chars);
		end_insert(head, data);
		chars = ft_strtok(NULL, ' ');
	}
	return (*head);
}

t_node *multiple_argument_parser(int argc, char **argv, t_node **head)
{
	int		i;
	int		data;

	*head = NULL;
	i = 1;
	while (i < argc)
	{	
		if (!is_actual_number(argv[i]))
			printf("The input: <%s> isn't an actual number \n", argv[i]);
		data = ft_atoi(argv[i]);
		//error check
		end_insert(head, data);
		i++;
	}
	return (*head);
}

t_node	*stack_a_init(int argc, char **argv, t_node **head)
{
	t_node *stack_a;

	stack_a = NULL;
	if (argc == 2)
		stack_a = two_argument_parser(argv[1], head);
	else
		stack_a = multiple_argument_parser(argc, argv, head);
	return (stack_a);
}

