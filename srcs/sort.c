/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:23:38 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/11 11:23:40 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_rot_sort(t_stack *stack, int min_s_index)
{
	int	a;
	int	b;
	int	c;

	(void)min_s_index;
	a = stack->head->data;
	b = stack->head->next->data;
	c = stack->head->next->next->data;
	if (a < b && b < c)
		return (1);
	if (b < c && a > c)
		return (1);
	if (c < a && a < b)
		return (1);
	return (0);
}

void	simple_sort(t_stack *stack, int length)
{
	int		min_s_index;
	int		r;

	if (is_sorted(stack))
		return ;
	min_s_index = get_min_index(stack);
	r = count_r(stack->head, min_s_index);
	if (is_rot_sort(stack, min_s_index))
	{
		if (r < length - r)
			rotate(stack, 'a', TRUE);
		else
			reverse_rotate(stack, 'a', TRUE);
	}
	else
	{
		swap(stack, 'a', TRUE);
		if (is_sorted(stack))
			return ;
		if (r < length - r)
			rotate(stack, 'a', TRUE);
		else
			reverse_rotate(stack, 'a', TRUE);
	}
}

void	s_insertion_sort(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	min_index;
	int	iter;
	int	n;

	iter = 0;
	n = length;
	while (iter++ < n - 3)
	{
		min_index = get_min_index(stack_a);
		if (count_r(stack_a->head, min_index) <= n - min_index
			- count_r(stack_a->head, min_index))
			while (stack_a->head->s_index != min_index)
				rotate(stack_a, 'a', TRUE);
		else
			while (stack_a->head->s_index != min_index)
				reverse_rotate(stack_a, 'a', TRUE);
		if (is_sorted(stack_a) && stack_b->size == 0)
			return ;
		push(stack_b, stack_a, 'b', TRUE);
		length--;
	}
	simple_sort(stack_a, length);
	iter = 0;
	while (iter++ < n - 3)
		push(stack_a, stack_b, 'a', TRUE);
}

void	sort(t_stack *stack_a, t_stack *stack_b, int *numbers, int length)
{
	if (is_sorted(stack_a))
	{
		free(numbers);
		free_stack(stack_a);
		ft_printf("Error\n");
	}
	else if (length == 2)
		swap(stack_a, 'a', TRUE);
	else if (length == 3)
		simple_sort(stack_a, length);
	else if (length <= 7)
		s_insertion_sort(stack_a, stack_b, length);
	else if (length > 7)
	{
		k_sort1(stack_a, stack_b, length);
		k_sort2(stack_a, stack_b, length);
	}
	else
		display_error2(numbers, stack_a);
}
