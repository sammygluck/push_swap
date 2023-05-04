/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_linked_list_utils.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:26:33 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/23 14:01:44 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_list(t_node *head)
{
	t_node	*current;
	t_node	*next_node;

	current = head;
	while(current != NULL)
	{
		next_node = current->next;
		free (current);
		current = next_node;
	}
}

t_node	*create_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	begin_insert(t_node **head, int data)
{
	t_node	*new_node;

	new_node = create_node(data);
	if (!new_node)
	{
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	new_node->next = *head;
	*head = new_node;
}

void	end_insert(t_node **head, int data)
{
	t_node	*new_node;
	t_node	*current;

	new_node = create_node(data);
	if (!new_node)
	{
		free_list(*head);
		exit(EXIT_FAILURE);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}

void	print_list(t_node *head)
{
	t_node *current = head;

	while (current != NULL)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n");
}
