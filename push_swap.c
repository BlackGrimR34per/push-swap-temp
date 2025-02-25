/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:39:09 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/24 18:00:30 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

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
		return (input_free(argv));
	stack_init(&stacks, argv);
	if (is_unsorted(stacks.a))
		stack_sort(&stacks);
	t_stack_node	*temp;
	temp = stacks.a;
	while (temp)
	{
		printf("Stack A: %d\n", temp->data);
		temp = temp->next;
	}
	temp = stacks.b;
	while (temp)
	{
		printf("Stack B: %d\n", temp->data);
		temp = temp->next;
	}
	return (0);
}
