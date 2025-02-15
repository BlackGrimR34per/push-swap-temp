/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:36:43 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/11 17:44:01 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Not too efficient will still check the value after the + / - sign
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
