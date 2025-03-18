/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:02:37 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/29 13:02:39 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"
# include "ft_printf.h"
# include "push_swap_common.h"


///////////////////// SORTING /////////////////////

int		instructions_2(t_stack *stack_a, t_stack *stack_b, char *line);
int		open_inst(t_stack *stack_a, t_stack *stack_b);
void	init_inst(t_stack *stack_a, t_stack *stack_b, int *numbers);
void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b);
void	swap_both(t_stack *stack_a, t_stack *stack_b);

#endif
