/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:39:17 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/29 13:39:19 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	open_inst(t_stack *stack_a, t_stack *stack_b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			return (0);
		if (instructions(stack_a, stack_b, line) == 1)
		{
			free(line);
			return (1);
		}
		free(line);
	}
}
