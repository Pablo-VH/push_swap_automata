/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:02:18 by pavicent          #+#    #+#             */
/*   Updated: 2024/07/29 13:02:20 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		count;
	int		*numbers;

	numbers = NULL;
	if (argc == 1)
		exit(EXIT_FAILURE);
	count = count_digits(argc, argv);
	if (check_syntax(argv) < 0)
		display_error(1, numbers);
	numbers = arg_parse(argc, argv, count);
	if (!numbers)
		exit(EXIT_FAILURE);
	if (check_dup_bf(numbers, count))
		display_error(2, numbers);
	init_stack(&stack_a, &stack_b, numbers, count);
	init_inst(&stack_a, &stack_b, numbers);
	return (EXIT_SUCCESS);
}
