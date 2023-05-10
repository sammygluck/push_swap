/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_errors.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:36:36 by sgluck            #+#    #+#             */
/*   Updated: 2023/05/10 09:49:08 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicates(t_node **stack)
{
	int		i;
	int		j;
	t_node	*current_1;
	t_node	*current_2;

	i = 0;
	current_1 = *stack;
	while (i < stack_length(*stack))
	{
		j = 0;
		current_2 = *stack;
		while (j < stack_length(*stack))
		{
			if (i != j && current_1->data == current_2->data)
				return (1);
			current_2 = current_2->next;
			j++;
		}
		current_1 = current_1->next;
		i++;
	}
	return (0);
}

int	is_actual_number(const char *str)
{
	int	i;
	int	number;
	int	return_value;

	i = 0;
	number = 0;
	return_value = 0;
	while ((str[i] > 8 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = str[i];
		if (!ft_isdigit(number))
			return (0);
		if (ft_isdigit(number))
			return_value = 1;
		i++;
	}
	return (return_value);
}

int	is_number_within_bounds(const char *str)
{
	unsigned long long	number;
	int					i;
	int					sign;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + str[i] - '0';
		if (((number > ((unsigned long long)INT_MAX + 1)) && (sign == -1))
			|| ((number > (unsigned long long)INT_MAX) && (sign == 1)))
			return (0);
		i++;
	}
	return (1);
}
