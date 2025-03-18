/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_inst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:06:22 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/30 11:06:24 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	content_stack(t_stack *stack)
{
	if (stack->size > 0)
		return (1);
	return (0);
}

int	instructions(t_stack *stack_a, t_stack *stack_b, char *line)
{
	if (ft_strncmp(line, "pa", 5) == 0 || ft_strncmp(line, "pa\n", 5) == 0)
		push(stack_a, stack_b, 'a', FALSE);
	else if (ft_strncmp(line, "pb", 5) == 0 || ft_strncmp(line, "pb\n", 5) == 0)
		push(stack_b, stack_a, 'b', FALSE);
	else if (ft_strncmp(line, "ra", 5) == 0 || ft_strncmp(line, "ra\n", 5) == 0)
		rotate(stack_a, 'a', FALSE);
	else if (ft_strncmp(line, "rb", 5) == 0 || ft_strncmp(line, "rb\n", 5) == 0)
		rotate(stack_b, 'b', FALSE);
	else if (ft_strncmp(line, "rra", 5) == 0
		|| ft_strncmp(line, "rra\n", 5) == 0)
		reverse_rotate(stack_a, 'a', FALSE);
	else if (ft_strncmp(line, "rrb", 5) == 0
		|| ft_strncmp(line, "rrb\n", 5) == 0)
		reverse_rotate(stack_b, 'b',FALSE);
	else if (ft_strncmp(line, "sa", 5) == 0 || ft_strncmp(line, "sa\n", 5) == 0)
		swap(stack_a, 'a', FALSE);
	else if (ft_strncmp(line, "sb", 5) == 0 || ft_strncmp(line, "sb\n", 5) == 0)
		swap(stack_b, 'b', FALSE);
	else if (ft_strncmp(line, "rr", 5) == 0 || ft_strncmp(line, "rr\n", 5) == 0)
		rotate_both(stack_a, stack_b, FALSE);
	else
		return (instructions_2(stack_a, stack_b, line));
	return (0);
}

void	init_inst(t_stack *stack_a, t_stack *stack_b, int *numbers)
{
	if (open_inst(stack_a, stack_b) == 1)
		display_error3(numbers, stack_a, stack_b);
	if (content_stack(stack_a) == 0)
		display_error3(numbers, stack_a, stack_b);
	if (!is_sorted(stack_a))
		display_error4(numbers, stack_a, stack_b);
	if (content_stack(stack_b) == 1)
		display_error4(numbers, stack_a, stack_b);
	ft_printf("OK\n");
	free(numbers);
	free_stack(stack_a);
}
