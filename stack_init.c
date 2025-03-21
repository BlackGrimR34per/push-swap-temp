/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:38:56 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/20 00:24:16 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_init(t_stack *stacks, char *argv[])
{
	int		row;
	long	nbr;

	row = -1;
	while (argv[++row])
	{
		nbr = ft_atol(argv[row]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			return (input_free(argv, 1));
		if (repeat(stacks, (int)nbr))
			return (input_free(argv, 1));
		add_to_stack(stacks, nbr);
	}
	return (input_free(argv, 0));
}
