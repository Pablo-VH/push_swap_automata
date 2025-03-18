/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_inst2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:56:53 by pavicent          #+#    #+#             */
/*   Updated: 2024/10/17 12:56:56 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	instructions_2(t_stack *stack_a, t_stack *stack_b, char *line)
{
	if (ft_strncmp(line, "ss", 5) == 0 || ft_strncmp(line, "ss\n", 5) == 0)
		swap_both(stack_a, stack_b);
	else if (ft_strncmp(line, "rrr", 5) == 0
		|| ft_strncmp(line, "rrr\n", 5) == 0)
		push(stack_b, stack_a, 'b', FALSE);
	else
		return (1);
	return (0);
}
