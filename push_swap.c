/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:18:44 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 22:24:28 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stacks;

	stacks.a = NULL;
	stacks.b = NULL;
	stacks.size_a = 0;
	stacks.size_b = 0;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (write_error());
	argv = input_seperator(argv);
	if (check_input(argv))
		return (input_free(argv, 1));
	if (stack_init(&stacks, argv))
		return (stack_free(stacks.a, 1));
	if (is_unsorted(stacks.a))
		stack_sort(&stacks);
	stack_free(stacks.a, 0);
}
