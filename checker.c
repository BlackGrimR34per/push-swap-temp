/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:12:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/21 13:23:38 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "checker.h"

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
			return (stack_free(stacks.a, 1));
		instruction_reader(&stacks);
		if (is_unsorted(stacks.a) || stacks.b)
			write(1, "KO\n", 2);
		else
			write(1, "OK\n", 2);
		stack_free(stacks.a, 0);
		stack_free(stacks.b, 0);
		return (0);
	}
}
