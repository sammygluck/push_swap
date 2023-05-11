/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:53:45 by sgluck            #+#    #+#             */
/*   Updated: 2023/05/11 13:23:29 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include "../ft_printf/ft_printf.h"

typedef struct s_node {
	struct s_node	*next;
	int				data;
}	t_node;

t_node	*create_node(int data);
t_node	*stack_a_init(int argc, char **argv, t_node **head);
t_node	*two_argument_parser(char *string, t_node **head);
t_node	*multiple_argument_parser(int argc, char **argv, t_node **head);
void	begin_insert(t_node **head, int data);
void	end_insert(t_node **head, int data);
void	print_list(t_node *head);
void	free_list(t_node *head);
void	init_error(t_node *head);
void	swap(t_node **stack);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	rotate(t_node **stack);
void	ra(t_node **stack);
void	rb(t_node **stack);
void	rr(t_node **stack_a, t_node **stack_b);
void	reverse_rotate(t_node **stack);
void	rra(t_node **stack);
void	rrb(t_node **stack);
void	rrr(t_node **stack_a, t_node **stack_b);
void	push(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_b, t_node **stack_a);
void	normalize_stack(t_node **stack);
void	rotate_to_top_through_ra(t_node **stack, int value);
void	rotate_to_top_through_rra(t_node **stack, int value);
void	small_stack_sort(t_node **stack_a, t_node **stack_b);
void	simplify_stack(t_node **stack, int *array);
void	radix(t_node **stack_a, t_node **stack_b);
void	algorithms(t_node **stack_a, t_node **stack_b);
void	three_stack(t_node **stack_a);
char	*ft_strtok(char *str, char delim);
int		count_numbers(char *string);
int		ft_atoi(const char *str);
int		is_sorted(t_node *head);
int		ft_isdigit(int c);
int		is_actual_number(const char *str);
int		is_number_within_bounds(const char *str);
int		stack_length(t_node *stack);
int		*stack_to_array(t_node *head, int stack_len);
int		*simplify_array(int *read_array, int *write_array, int stack_len);
int		find_max(t_node *stack);
int		bit_length(int max);
int		has_duplicates(t_node **stack);
int		find_min(t_node *stack);
int		find_index_of_value(t_node *stack, int target);
int		is_ra_shortest_way(t_node *stack, int value);

#endif
