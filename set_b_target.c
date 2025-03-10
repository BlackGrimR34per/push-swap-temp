/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_b_target.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:39:08 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 15:53:28 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_b_target(t_stack *stacks)
{
	t_stack_node	*temp_a;
	t_stack_node	*temp_b;
	t_stack_node	*target_node;
	long			closest_number;

	temp_b = stacks->b;
	while (temp_b)
	{
		closest_number = LONG_MAX;
		temp_a = stacks->a;
		while (temp_a)
		{
			if (temp_a->data > temp_b->data && temp_a->data < closest_number)
			{
				target_node = temp_a;
				closest_number = temp_a->data;
			}
			temp_a = temp_a->next;
		}
		temp_b->target_node = target_node;
		if (closest_number == LONG_MAX)
			temp_b->target_node = find_smallest_node(stacks);
		temp_b = temp_b->next;
	}
}
