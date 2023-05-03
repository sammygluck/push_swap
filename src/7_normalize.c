/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:19:22 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/23 18:24:00 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize_stack(t_node **stack)
{
	int	*read_array;
	int	*write_array;
	int	*simplified_array;
	int	stack_len;

	stack_len = stack_length(*stack);
	read_array = stack_to_array(*stack, stack_len);
	// if something goes wrong in write array, we must also free read_array
	write_array = stack_to_array(*stack, stack_len);
	simplified_array = simplify_array(read_array, write_array, stack_len);
	simplify_stack(stack, simplified_array);
	free(read_array);
	free(write_array);
}

int	*stack_to_array(t_node *head, int stack_len)
{
	int	i;
	int	*array;

	array = malloc(stack_len * sizeof(int));
	if (!array)
		exit(EXIT_FAILURE);
	i = 0;
	while (head)
	{
		array[i] = head->data;
		head = head->next;
		i++;
	}
	return (array);
}

int	*simplify_array(int *read_array, int *write_array, int stack_len)
{
	int	i;
	int	j;
	int	ranking;

	i = 0;
	while (i < stack_len)
	{
		j = 0;
		ranking = 0;
		while (j < stack_len)
		{
			if (read_array[i] > read_array[j])
				ranking++;
			j++;
		}
		write_array[i] = ranking;
		i++;
	}
	return (write_array);
}

void	simplify_stack(t_node **stack, int *array)
{
	t_node	*current;
	int		i;

	current = *stack;
	i = 0;
	while (current)
	{
		current->data = array[i];
		current = current->next;
		i++;
	}
}
