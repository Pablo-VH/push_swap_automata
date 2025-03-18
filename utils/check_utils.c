#include "push_swap_common.h"

int	take_top(t_stack *stack)
{
	t_node	*top;
	int		data;

	if (!stack->head)
		exit(EXIT_FAILURE);
	top = stack->head;
	data = top->data;
	stack->head = top->next;
	free(top);
	top = NULL;
	stack->size--;
	return (data);
}

int	is_sorted(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->head;
	while (tmp->next)
	{
		if ((tmp->data) > (tmp->next->data))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
