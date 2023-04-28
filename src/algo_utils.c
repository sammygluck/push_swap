#include "push_swap.h"

//This checks the stack length
int	stack_length(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}