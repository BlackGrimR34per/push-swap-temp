/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:11:34 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/03 14:45:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Unsure of what to do when nbr is greater than max or min
void	stack_init(t_stack *stacks, char *argv[])
{
	int		row;
	long	nbr;

	row = -1;
	while (argv[++row])
	{
		nbr = ft_atol(argv[row]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			input_free(argv);
		if (repeat(stacks, (int)nbr))
			input_free(argv);
		free(argv[row]);
		add_to_stack(stacks, nbr);
	}
	free(argv);
}
