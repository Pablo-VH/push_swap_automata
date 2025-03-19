/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavicent <pavicent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:05:47 by pavicent          #+#    #+#             */
/*   Updated: 2025/03/19 09:28:06 by pavicent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_common.h"

/*int	get_state(int state, int int_token)
{
	const int	matrix[][5] = {
		{1, 2, 3, 4}, // 0 inicial
		{1, 1, 1, 1}, // 1 error
		{1, 2, 3, 4}, // 2 space
		{1, 1, 1, 4}, // 3 symbols
		{1, 2, 1, 4}, // 4 number
	}; 	 *	S  +- N
	return (matrix[state][int_token]);
}*/

int	str_isdigit(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	get_state(int state, int int_token)
{
	const int	matrix[][5] = {
	{1, 2, 3, 4},
	{1, 1, 1, 1},
	{1, 2, 3, 4},
	{1, 1, 1, 4},
	{1, 2, 1, 4},
	};

	return (matrix[state][int_token]);
}

int	choose_state(int prev, char c)
{
	int	pos;
	int	state;

	pos = 0;
	state = prev;
	if (ft_isspace(c))
		pos = 1;
	if (c == '+' || c == '-')
		pos = 2;
	if (ft_isdigit(c))
		pos = 3;
	state = get_state(state, pos);
	return (state);
}

int	check_syntax(char **argv)
{
	int	i;
	int	j;
	int	state;

	i = 1;
	while (argv[i])
	{
		j = 0;
		state = 0;
		while (argv[i][j])
		{
			state = choose_state(state, argv[i][j]);
			if (state == 1)
				return (-1);
			j++;
		}
		i++;
	}
	return (i - 1);
}
