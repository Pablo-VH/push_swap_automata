/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:41:42 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/18 13:41:48 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	k_sort1(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(length) * 14 / 10;
	while (stack_a->head)
	{
		if (stack_a->head->s_index <= i)
		{
			push(stack_b, stack_a, 'b', TRUE);
			i++;
		}
		else if (stack_a->head->s_index <= i + range)
		{
			push(stack_b, stack_a, 'b', TRUE);
			i++;
			if (!(stack_a->head->s_index <= i + range))
				rotate_both(stack_a, stack_b, TRUE);
			else
				rotate(stack_b, 'b', TRUE);
		}
		else
			rotate(stack_a, 'a', TRUE);
	}
}

void	k_sort2(t_stack *stack_a, t_stack *stack_b, int length)
{
	int	rb_count;
	int	rrb_count;

	while (length - 1 >= 0)
	{
		rb_count = count_r(stack_b->head, length - 1);
		rrb_count = (length + 3) - rb_count;
		if (rb_count <= rrb_count)
		{
			while (stack_b->head->s_index != length - 1)
				rotate(stack_b, 'b', TRUE);
			push(stack_a, stack_b, 'a', TRUE);
			length--;
		}
		else
		{
			while (stack_b->head->s_index != length - 1)
				reverse_rotate(stack_b, 'b', TRUE);
			push(stack_a, stack_b, 'a', TRUE);
			length--;
		}
	}
}
