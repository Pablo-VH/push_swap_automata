/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:59:48 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/15 11:59:52 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_common.h"

void	swap(t_stack *stack, char x, t_bool b)
{
	t_node	*tmp;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	tmp = stack->head;
	stack->head = tmp->next;
	tmp->next = stack->head->next;
	stack->head->next = tmp;
	if (b)
		ft_printf("s%c\n", x);
}

void	rotate(t_stack *stack, char x, t_bool b)
{
	t_node	*tmp;
	t_node	*current;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	tmp = stack->head;
	stack->head = tmp->next;
	current = stack->head;
	while (current->next)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	if (b)
		ft_printf("r%c\n", x);
}

void	reverse_rotate(t_stack *stack, char x, t_bool b)
{
	t_node	*tmp;
	t_node	*current;

	if (!stack->head || !stack->head->next || !stack)
		return ;
	current = stack->head;
	while (current->next->next != NULL)
		current = current->next;
	tmp = current->next;
	current->next = NULL;
	tmp->next = stack->head;
	stack->head = tmp;
	if (b)
		ft_printf("rr%c\n", x);
}

void	push(t_stack *stack1, t_stack *stack2, char x, t_bool b)
{
	int	index;

	if (stack2->head == NULL)
		return ;
	index = stack2->head->s_index;
	push_stack(stack1, index, take_top(stack2));
	if (b)
		ft_printf("p%c\n", x);
}

void	rotate_both(t_stack *stack_a, t_stack *stack_b, t_bool b)
{
	rotate(stack_a, 'a', FALSE);
	rotate(stack_b, 'b', FALSE);
	if (b)
		write(1, "rr\n", 3);
}
