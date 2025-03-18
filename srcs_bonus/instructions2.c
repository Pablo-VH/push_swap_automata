/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:48:26 by pavicent          #+#    #+#             */
/*   Updated: 2024/10/17 13:48:29 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a, 'a', FALSE);
	reverse_rotate(stack_b, 'b', FALSE);
}

void	swap_both(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a, 'a', FALSE);
	swap(stack_b, 'b', FALSE);
}
