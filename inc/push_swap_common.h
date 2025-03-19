/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_common.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 09:31:17 by pavicent          #+#    #+#             */
/*   Updated: 2025/03/19 09:34:36 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_COMMON_H
# define PUSH_SWAP_COMMON_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "ft_printf.h"
# include "libft.h"

typedef int			t_bool;
# define TRUE 1
# define FALSE 0

// Definición de estructuras comunes
typedef struct s_node
{
	int				data;
	int				s_index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node	*head;
	int		size;
}			t_stack;

///////////////////// SORTING /////////////////////

int		ft_index(int n, int *arr);
int		is_sorted(t_stack *stack);
void	insertion_sort(int array[], int n);

////////////////// INSTRUCTIONS ////////////////////

int		instructions(t_stack *stack_a, t_stack *stack_b, char *line);
void	rotate(t_stack *stack, char x, t_bool b);
void	reverse_rotate(t_stack *stack, char x, t_bool b);
void	swap(t_stack *stack, char x, t_bool b);
void	push(t_stack *stack1, t_stack *stack2, char x, t_bool b);
void	rotate_both(t_stack *stack_a, t_stack *stack_b, t_bool b);

/////////////////// STRUCT UTILS ///////////////////

int		take_top(t_stack *stack);
void	init_stack(t_stack *stack_a, t_stack *stack_b, int *numbers, int count);
void	push_stack(t_stack *stack, int index, int data);

///////////////////// PARSING //////////////////////

int		*arg_parse(int argc, char **argv, int count);
int		count_digits(int argc, char **argv);
int		check_dup_bf(int *numbers, int count);
int		check_syntax(char **argv);
int		ft_check_len(char *numbers);
int		str_isdigit(char *argv);
int		take_top(t_stack *stack);
void	check_range(char **s_numbers, int *numbers);
void	display_error(int c, int *numbers);
void	display_error2(int *numbers, t_stack *stack_a);
void	display_error3(int *numbers, t_stack *stack_a, t_stack *stack_b);
void	display_error4(int *numbers, t_stack *stack_a, t_stack *stack_b);
void	free_stack(t_stack *stack);
void	free_2d(char **str);

#endif
