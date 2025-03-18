/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:23:53 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/11 11:23:55 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_common.h"

void	insertion_sort(int array[], int n)
{
	int	element;
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		element = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > element)
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = element;
		i++;
	}
}

int	ft_index(int n, int *arr)
{
	int	i;

	i = 0;
	while (arr[i] != n)
		i++;
	return (i);
}

void	push_stack(t_stack *stack, int index, int data)
{
	t_node	*tmp;

	tmp = (t_node *)malloc(sizeof(t_node));
	if (!tmp)
		return ;
	tmp->data = data;
	tmp->s_index = index;
	tmp->next = stack->head;
	stack->head = tmp;
	stack->size++;
}

void	init_stack(t_stack *stack_a, t_stack *stack_b, int *numbers, int count)
{
	int		i;
	t_node	*tmp;

	stack_a->head = NULL;
	stack_b->head = NULL;
	stack_a->size = 0;
	stack_b->size = 0;
	i = count - 1;
	while (i >= 0)
	{
		push_stack(stack_a, 0, numbers[i]);
		i--;
	}
	insertion_sort(numbers, count);
	tmp = stack_a->head;
	while (tmp)
	{
		tmp->s_index = ft_index(tmp->data, numbers);
		tmp = tmp->next;
	}
}
