/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 09:37:50 by pavicent          #+#    #+#             */
/*   Updated: 2025/03/19 09:37:52 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
