/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:54:05 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/05 11:54:08 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
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

// Colours
# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define YELLOW "\033[0;33m"
# define GREEN "\033[0;32m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;97m"
# define RESET "\033[0m"

///////////////////// SORTING /////////////////////

int		count_r(t_node *stack, int index);
int		ft_sqrt(int number);
int		get_min_index(t_stack *stack);
int		is_rot_sort(t_stack *stack, int min_s_index);
void	k_sort1(t_stack *stack_a, t_stack *stack_b, int length);
void	k_sort2(t_stack *stack_a, t_stack *stack_b, int length);
void	s_insertion_sort(t_stack *stack_a, t_stack *stack_b, int length);
void	simple_sort(t_stack *stack, int length);
void	sort(t_stack *stack_a, t_stack *stack_b, int *numbers, int length);

#endif
