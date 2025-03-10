/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:12:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 22:22:18 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stacks;

	if (argc < 2)
		return (-1);
	else
	{
		stacks.a = NULL;
		stacks.b = NULL;
		stacks.size_a = 0;
		stacks.size_b = 0;
		argv = input_seperator(argv);
		if (check_input(argv))
			return (input_free(argv, 1));
		if (stack_init(&stacks, argv))
			stack_free(stacks.a);
	}
}
