/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_a_target.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 06:27:13 by yosherau          #+#    #+#             */
/*   Updated: 2025/03/10 15:38:40 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_a_target(t_stack *stacks)
{
	t_stack_node	*temp_a;
	t_stack_node	*temp_b;
	t_stack_node	*target_node;
	long			closest_number;

	temp_a = stacks->a;
	while (temp_a)
	{
		closest_number = LONG_MIN;
		temp_b = stacks->b;
		while (temp_b)
		{
			if (temp_b->data < temp_a->data && closest_number < temp_b->data)
			{
				closest_number = temp_b->data;
				target_node = temp_b;
			}
			temp_b = temp_b->next;
		}
		temp_a->target_node = target_node;
		if (closest_number == LONG_MIN)
			temp_a->target_node = find_largest_node(stacks);
		temp_a = temp_a->next;
	}
}
