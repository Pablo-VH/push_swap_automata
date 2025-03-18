/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:41:31 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/18 13:41:34 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_index(t_stack *stack)
{
	t_node	*current;
	int		min_index;

	current = stack->head;
	min_index = current->s_index;
	while (current->next)
	{
		current = current->next;
		if (current->s_index < min_index)
			min_index = current->s_index;
	}
	return (min_index);
}

int	count_r(t_node *stack, int index)
{
	int	counter;

	counter = 0;
	while (stack && stack->s_index != index)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}

int	ft_sqrt(int number)
{
	int	i;

	if (number < 4)
		return (1);
	i = 2;
	while (i * i < number)
		i++;
	if (i * i > number)
	{
		if ((i * i - number) < ((i - 1) * (i - 1) + (-number)))
			return (i);
	}
	return (i - 1);
}
