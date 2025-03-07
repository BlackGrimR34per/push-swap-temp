/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:06:28 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/06 14:29:27 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(char *argv[])
{
	int	row;
	int	column;

	row = -1;
	while (argv[++row])
	{
		column = -1;
		while (argv[row][++column])
		{
			if (argv[row][column] == '+' || argv[row][column] == '-')
			{
				if (!ft_isdigit(argv[row][column + 1]))
					return (1);
			}
			else if (!ft_isdigit(argv[row][column]))
				return (1);
		}
	}
	return (0);
}
