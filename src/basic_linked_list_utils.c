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

void free_list(node *head)
{
	node	*current;
	node	*next_node;

	current = head;
	while(current != NULL)
	{
		next_node = current->next;
		free (current);
		current = next_node;
	}
}

node	*create_node(int data)
{
	node	*new_node;

	new_node = (node *)malloc(sizeof(node));
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	begin_insert(node **head, int data)
{
	node	*new_node;

	new_node = create_node(data);
	new_node->next = *head;
	*head = new_node;
}

void	end_insert(node **head, int data)
{
	node	*new_node;
	node	*current;

	new_node = create_node(data);
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

void	print_list(node *head)
{
	node *current = head;

	while (current != NULL)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n");
}
